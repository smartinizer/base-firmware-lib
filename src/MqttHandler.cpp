#include <MqttHandler.h>



MqttHandler::MqttHandler(void (*callback_func)(char*, String)) {
    mqttClient = PubSubClient(espClient);
    usecase_callback = callback_func; 
    mqttClient.setServer(mqtt_server, 1883);

    // to make non-static function static... i know it doesnt look nice :( but it works
    using std::placeholders::_1;
    using std::placeholders::_2;
    using std::placeholders::_3;
    mqttClient.setCallback(std::bind(&MqttHandler::callback_decode, this, _1,_2,_3));
}

void MqttHandler::reconnect() {
    // Loop until we're reconnected
    while (!mqttClient.connected()) {
        Serial.print("Attempting MQTT connection...");

        // Attempt to connect
        if (mqttClient.connect("ESP32-1")) {
            Serial.println("connected");
            // Subscribe
            mqttClient.subscribe("command");
        } else {
            Serial.print("failed, rc=");
            Serial.print(mqttClient.state());
            Serial.println(" try again in 5 seconds");
            // Wait 5 seconds before retrying
            delay(5000);
        }
    }
}

void MqttHandler::loop() {
    if (!mqttClient.connected()) {
        reconnect();
    }

    mqttClient.loop();

    long now = millis();
    if (now - lastMsg > 10*1000) {
        lastMsg = now;
        mqttClient.publish("alive_check", "Hello");
    }
}

void MqttHandler::callback_decode(char* topic, byte* message, unsigned int length) {
    Serial.print("Message arrived on topic: ");
    Serial.print(topic);
    Serial.print(". Message: ");
    String messageString;
    
    for (int i = 0; i < length; i++) {
        Serial.print((char)message[i]);
        messageString += (char)message[i];
    }
    Serial.println();
    MqttHandler::usecase_callback(topic,messageString);
}
