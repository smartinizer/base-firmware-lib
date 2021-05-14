#ifndef MqttHandler_h
#define MqttHandler_h

#include <PubSubClient.h>
#include <WiFi.h>

class MqttHandler;

class MqttHandler {
  private:
    const char* mqtt_server = "pi-docker";
    long lastMsg = 0;
    void reconnect();
    void callback_decode(char* topic, byte* message, unsigned int length);
    WiFiClient espClient;
    PubSubClient mqttClient;

  public:
    void (*usecase_callback)(char*, String);
    void loop();
    MqttHandler(void (*callback_func)(char*, String));
};

#endif // MqttHandler_h