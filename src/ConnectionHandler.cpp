#include <ConnectionHandler.h>


ConnectionHandler::ConnectionHandler() {
    AP_SSID = "Smartinizer";  
    AP_PWD = "12345678";
    AP_IP = IPAddress(192,168,0,1);
    AP_SUBNET = IPAddress(255,255,255,0);
};

bool ConnectionHandler::wifi_ap_setup(){
    Serial.print("Setting soft-AP ... ");
    bool setup_status =WiFi.softAP(AP_SSID, AP_PWD);
    // needed, else softAPConfig is not working
    delay(2000);
    Serial.print("Setting soft-AP configuration ... ");
    Serial.println(WiFi.softAPConfig(AP_IP, AP_IP, AP_SUBNET) ? "Ready" : "Failed!");
    Serial.println(setup_status ? "Ready" : "Failed!");
    
    Serial.print("Soft-AP IP address = ");
    Serial.println(WiFi.softAPIP());

    return setup_status;
}


bool ConnectionHandler::wifi_sta_setup( String ssid_input,String pw_input){

    WiFi.config(INADDR_NONE, INADDR_NONE, INADDR_NONE);
    WiFi.setHostname("smartinizer1");
    delay(2000);
    WiFi.begin(ssid_input.c_str(), pw_input.c_str());

    Serial.print("Connecting...");
    int try_count = 0;
    wl_status_t status;

    do {
    status=WiFi.status();
        delay(1000);
    Serial.print(".");
    try_count++;
    if(try_count>=60){
        Serial.println("Cant connect...");
        config::deleteWifiCredentials();
        ESP.restart();
    }
    }while(status !=WL_CONNECTED);

    connected = true;
    Serial.println();
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());

    return true;
}


boolean ConnectionHandler::isConnected(){
    return connected;
}  
