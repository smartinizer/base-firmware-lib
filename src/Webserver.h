#ifndef Webserver_h
#define Webserver_h

#include <ESPAsyncWebServer.h>
#include <SPIFFS.h>
#include <iostream>
#include <string>
#include <ConfigHandler.h>
#include <WebBuilder.h>
#include <OTA.h>

class WebServer;

class SmartinizerWebServer{

    public: 
        SmartinizerWebServer();
    
    protected:
        AsyncWebServer server;

};

void notFound(AsyncWebServerRequest *request);

#endif // Webserver_h