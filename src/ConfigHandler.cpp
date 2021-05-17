#include <ConfigHandler.h>


namespace config{

    const char* lets_encrypt_ca_cert =
        "-----BEGIN CERTIFICATE-----\n"
        "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\n"
        "nLRbwHOoq7hHwg==\n"
        "-----END CERTIFICATE-----\n";


    const char* digi_cert_ca_cert =
        "-----BEGIN CERTIFICATE-----\n" \
        "MIIDxTCCAq2gAwIBAgIQAqxcJmoLQJuPC3nyrkYldzANBgkqhkiG9w0BAQUFADBs\n" \
        "MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\n" \
        "d3cuZGlnaWNlcnQuY29tMSswKQYDVQQDEyJEaWdpQ2VydCBIaWdoIEFzc3VyYW5j\n" \
        "ZSBFViBSb290IENBMB4XDTA2MTExMDAwMDAwMFoXDTMxMTExMDAwMDAwMFowbDEL\n" \
        "MAkGA1UEBhMCVVMxFTATBgNVBAoTDERpZ2lDZXJ0IEluYzEZMBcGA1UECxMQd3d3\n" \
        "LmRpZ2ljZXJ0LmNvbTErMCkGA1UEAxMiRGlnaUNlcnQgSGlnaCBBc3N1cmFuY2Ug\n" \
        "RVYgUm9vdCBDQTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMbM5XPm\n" \
        "+9S75S0tMqbf5YE/yc0lSbZxKsPVlDRnogocsF9ppkCxxLeyj9CYpKlBWTrT3JTW\n" \
        "PNt0OKRKzE0lgvdKpVMSOO7zSW1xkX5jtqumX8OkhPhPYlG++MXs2ziS4wblCJEM\n" \
        "xChBVfvLWokVfnHoNb9Ncgk9vjo4UFt3MRuNs8ckRZqnrG0AFFoEt7oT61EKmEFB\n" \
        "Ik5lYYeBQVCmeVyJ3hlKV9Uu5l0cUyx+mM0aBhakaHPQNAQTXKFx01p8VdteZOE3\n" \
        "hzBWBOURtCmAEvF5OYiiAhF8J2a3iLd48soKqDirCmTCv2ZdlYTBoSUeh10aUAsg\n" \
        "EsxBu24LUTi4S8sCAwEAAaNjMGEwDgYDVR0PAQH/BAQDAgGGMA8GA1UdEwEB/wQF\n" \
        "MAMBAf8wHQYDVR0OBBYEFLE+w2kD+L9HAdSYJhoIAu9jZCvDMB8GA1UdIwQYMBaA\n" \
        "FLE+w2kD+L9HAdSYJhoIAu9jZCvDMA0GCSqGSIb3DQEBBQUAA4IBAQAcGgaX3Nec\n" \
        "nzyIZgYIVyHbIUf4KmeqvxgydkAQV8GK83rZEWWONfqe/EW1ntlMMUu4kehDLI6z\n" \
        "eM7b41N5cdblIZQB2lWHmiRk9opmzN6cN82oNLFpmyPInngiK3BD41VHMWEZ71jF\n" \
        "hS9OMPagMRYjyOfiZRYzy78aG6A9+MpeizGLYAiJLQwGXFK3xPkKmNEVX58Svnw2\n" \
        "Yzi9RKR/5CYrCsSXaQ3pjOLAEFe4yHYSkVXySGnYvCoCWw9E1CAx2/S6cCZdkGCe\n" \
        "vEsXCS+0yx5DaMkHJ8HSXPfqIbloEpw8nL+e/IBcm2PN7EeqJSdnoDfzAIJ9VNep\n" \
        "+OkuE6N36B9K\n" \
        "-----END CERTIFICATE-----\n";


        void downloadFile(String url, String filename, bool overwrite){
        if(SPIFFS.exists(filename) && !overwrite){
            Serial.println("File " + filename + " already exists, skipping download!");
            return;
        }

        

        WiFiClientSecure *client = new WiFiClientSecure;
        if (client)
        {
            client->setCACert(digi_cert_ca_cert);
            {
                // Add a scoping block for HTTPClient https to make sure it is destroyed before WiFiClientSecure *client is
                HTTPClient https;

                Serial.print("[HTTPS] begin...\n");
                if (https.begin(*client, url))
                { // HTTPS
                    Serial.print("[HTTPS] GET...\n");
                    // start connection and send HTTP header
                    int httpCode = https.GET();

                    // httpCode will be negative on error
                    if (httpCode > 0)
                    {
                        // HTTP header has been send and Server response header has been handled
                        Serial.printf("[HTTPS] GET... code: %d\n", httpCode);

                        // file found at server
                        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY)
                        {
                            
                            File file = SPIFFS.open(filename, "w");
                            if (!file)
                            {
                                Serial.println("Konnte " + filename + " nicht schreiben");
                                return;
                            }
                            String payload = https.getString();
                            file.print(payload);
                            Serial.println("Wrote " + filename + " to SPIFFS");
                            file.close();

                        }
                    }
                    else
                    {
                        Serial.printf("[HTTPS] GET... failed, error: %s\n", https.errorToString(httpCode).c_str());
                    }
                    https.end();
                }
                else
                {
                    Serial.printf("[HTTPS] Unable to connect\n");
                }

                // End extra scoping block
            }
            delete client;
        }
        else
        {
            Serial.println("Unable to create client");
        }

    }

    void writeWifiCredentials(String ssid, String pw) {
        File wpa = SPIFFS.open("/wpa.conf", "w");
        if (!wpa){
            Serial.println("Konnte wpa.conf nicht schreiben");
        }
        wpa.print(ssid +","+pw);
        wpa.close(); 
    }

    void deleteWifiCredentials(){
        File wpa = SPIFFS.open("/wpa.conf", "w");
        if (!wpa){
            Serial.println("Konnte wpa.conf nicht schreiben");
        }else{
            SPIFFS.remove("/wpa.conf");
        }

    }

    std::tuple<String, String> getWifiCredentialsfromwpaconf() {
        File wpar = SPIFFS.open("/wpa.conf", "r");
        if (!wpar){
            Serial.println("Konnte wpa.conf nicht einlesen");
        }
        if(wpar.available()){
            String ssid = wpar.readStringUntil(',');
            String pw = wpar.readStringUntil('\n');
            wpar.close();
            return std::make_tuple(ssid, pw);
        }
        
        wpar.close();
        return std::make_tuple("","");
    }

    
    void writeUpdateConfig(String firmware_url)
    {
        File config = SPIFFS.open("/update.conf", "w");
        if (!config)
        {
            Serial.println("Konnte update.conf nicht schreiben");
        }
        else
        {
            config.print(firmware_url);
            config.close();
        }
    }

    boolean checkForUpdateConfig()
    {
        return SPIFFS.exists("/update.conf");
    }

    String getUpdateConfig()
    {
        File config = SPIFFS.open("/update.conf", "r");
        String update_config = "";
        if (!config)
        {
            Serial.println("Konnte update.conf nicht lesen");
        }
        else
        {
            update_config = config.readString();
        }
        return update_config;
    }

    void deleteUpdateConfig()
    {
        File config = SPIFFS.open("/update.conf", "w");
        if (!config)
        {
            Serial.println("Konnte update.conf nicht öffnen");
        }
        else
        {
            config.close();
            SPIFFS.remove("/update.conf");
        }
    }


    void downloadFirmwareList(String url)
    {
        downloadFile(url, "/downloads/firmwares.json", true);
    }

    String getFirmwareList()
    {
        File file = SPIFFS.open("/downloads/firmwares.json", "r");
        String firmware_list = "";
        if (!file)
        {
            Serial.println("Konnte update.conf nicht lesen");
        }
        else
        {
            firmware_list = file.readString();
        }
        return firmware_list;
    }

    String getFirmwareConfig(String url){
        WiFiClientSecure *client = new WiFiClientSecure;
        String payload = "";
        if (client)
        {
            client->setCACert(lets_encrypt_ca_cert);
            {
                // Add a scoping block for HTTPClient https to make sure it is destroyed before WiFiClientSecure *client is
                HTTPClient https;

                Serial.print("[HTTPS] begin...\n");
                if (https.begin(*client, url))
                { // HTTPS
                    Serial.print("[HTTPS] GET...\n");
                    // start connection and send HTTP header
                    int httpCode = https.GET();

                    // httpCode will be negative on error
                    if (httpCode > 0)
                    {
                        // HTTP header has been send and Server response header has been handled
                        Serial.printf("[HTTPS] GET... code: %d\n", httpCode);

                        // file found at server
                        if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY)
                        {
                            payload = https.getString();
                        }
                    }
                    else
                    {
                        Serial.printf("[HTTPS] GET... failed, error: %s\n", https.errorToString(httpCode).c_str());
                    }
                    https.end();
                }
                else
                {
                    Serial.printf("[HTTPS] Unable to connect\n");
                }
                // End extra scoping block
            }
            delete client;
        }
        else
        {
            Serial.println("Unable to create client");
        }
        payload.replace("\n", "");
        return payload;
    }

    void writeFirmwareConfig(String firmwareConfig){
        File config = SPIFFS.open("/firmware-config.json", "w");
        if (!config)
        {
            Serial.println("Konnte firmware-config.json nicht schreiben");
        }
        else
        {
            config.print(firmwareConfig);
            config.close();
        }
    }

    String getConfigByKey(String key){
        File file = SPIFFS.open("/firmware-config.json", "r");
        StaticJsonDocument<2014> doc;
        if (!file)
        {
            Serial.println("Konnte firmware-config.json nicht lesen");
        }
        else
        {
            String content = file.readString();
            deserializeJson(doc, content);
            file.close();
        }
        JsonObject obj = doc.as<JsonObject>();
        return obj[key].as<String>();
    }

    void downloadStaticFiles(){
        // index.html
        downloadFile("https://raw.githubusercontent.com/smartinizer/base-firmware-lib/feature/static_data/data/index.html", "/index.html", false);
        // config.html
        downloadFile("https://raw.githubusercontent.com/smartinizer/base-firmware-lib/feature/static_data/data/config.html", "/config.html", false);
        // config-firmware.html
        downloadFile("https://raw.githubusercontent.com/smartinizer/base-firmware-lib/feature/static_data/data/config-firmware.html", "/config-firmware.html", false);
        // installing-firmware.html
        downloadFile("https://raw.githubusercontent.com/smartinizer/base-firmware-lib/feature/static_data/data/installing-firmware.html", "/config-firmware.html", false);
        // stype.css
        downloadFile("https://raw.githubusercontent.com/smartinizer/base-firmware-lib/feature/static_data/data/style.css", "/style.css", false);
        // wifi.html
        downloadFile("https://raw.githubusercontent.com/smartinizer/base-firmware-lib/feature/static_data/data/wifi.html", "/wifi.html", false);
    }

    void cleanFlashExceptWifiConf(){
        String ssid, pw;
        std::tie(ssid, pw) = config::getWifiCredentialsfromwpaconf();
        SPIFFS.format();
        writeWifiCredentials(ssid, pw);
        Serial.println("Erased everythin in the flash except the WIFI.conf!");
    }

}
