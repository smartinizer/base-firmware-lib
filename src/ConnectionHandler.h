#ifndef ConnectionHandler_h
#define ConnectionHandler_h

#include <WiFi.h>

#include <ConfigHandler.h>

class ConnectionHandler;

class ConnectionHandler {
  private:
    bool connected = false;
    const char* AP_SSID = "Smartinizer";  
    const char* AP_PWD = "12345678"; 
    IPAddress AP_IP;
    IPAddress AP_SUBNET;

  public: 
    ConnectionHandler();
    bool wifi_ap_setup();
    bool wifi_sta_setup(String ssid_input,String pw_input);
    bool isConnected();
};


#endif // ConnectionHandler_h