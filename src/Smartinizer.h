#ifndef Smartinizer_h
#define Smartinizer_h

#include <iostream>

#include <PubSubClient.h>

#include <MqttHandler.h>
#include <Webserver.h>
#include <ConnectionHandler.h>
#include <ConfigHandler.h>
#include <OTA.h>

#include <SPIFFS.h>


class Smartinizer;

class Smartinizer {
    public:
        Smartinizer();

        ~Smartinizer();
        
        void register_usecase(void (*callback_func)(char*, String));
        void setup();
        void loop();
       
        MqttHandler* mqtt;
        ConnectionHandler* connectionHandler;
        SmartinizerWebServer* webserver;

    protected:
        void (*usecase_callback)(char*, String);
};


#endif // Smartinizer_h
