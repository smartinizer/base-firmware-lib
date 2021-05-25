#include <Smartinizer.h>

Smartinizer::Smartinizer(){}


void Smartinizer::setup(){
    
    Serial.begin(115200);

    mqtt = NULL;
    usecase_callback = NULL;

    Serial.println("Setting up Smartinizer...");

    if(!SPIFFS.begin()){
        Serial.println("An Error has occurred while mounting SPIFFS");
        exit(-1);
    }

    ConnectionHandler* connectionHandler = new ConnectionHandler();

    Serial.println("Set up ConnectionHandler");

    String ssid, pw;
    std::tie(ssid, pw) = config::getWifiCredentialsfromwpaconf();
    if(ssid!=""){

      Serial.print("Trying to connect to ");
      Serial.println(ssid);
      if(connectionHandler->wifi_sta_setup(ssid.c_str(), pw.c_str())){
        update::update_if_sheduled();
        config::downloadStaticFiles();
        config::downloadFirmwareList("https://raw.githubusercontent.com/smartinizer/Firmware-List/main/firmwares.json");

        // start usecase if already registered
        if (usecase_callback){
          mqtt = new MqttHandler(usecase_callback);
        }
        
      };

    }else{
      Serial.println("Cant find config");
      connectionHandler->wifi_ap_setup();
    }

    webserver = new SmartinizerWebServer();
}

void Smartinizer::loop(){
  if(mqtt != NULL){
    mqtt->loop();
    
  }
}


void Smartinizer::register_usecase(void (*callback_func)(char*, String)){
  if (!usecase_callback){
    usecase_callback = callback_func;
    mqtt = new MqttHandler(usecase_callback);
  }else{
    Serial.println("Usecase already startet.");
  }
}

void Smartinizer::downloadFile(String url, String fileName, bool overwrite){
  config::downloadFile(url, fileName, overwrite);
}

String Smartinizer::getConfigByKey(String key){
  return config::getConfigByKey(key);
}
