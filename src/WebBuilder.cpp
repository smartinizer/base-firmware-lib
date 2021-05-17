#include <WebBuilder.h>

namespace webbuilder{

    JsonArray getFirmwares(){
        StaticJsonDocument<2014> doc;
        deserializeJson(doc, config::getFirmwareList());
        JsonObject obj = doc.as<JsonObject>();
        return obj["firmwares"];
    }


    // Takes the config.html from the SPIFFS and injects the available firmwares as RadioButtons
    String getConfigPage(){
        File file = SPIFFS.open("/config.html", "r");
        Serial.println("Opened config.html");
        StaticJsonDocument<2014> doc;
        deserializeJson(doc, config::getFirmwareList());
        JsonObject obj = doc.as<JsonObject>();
        JsonArray firmwares = obj["firmwares"];
        Serial.println("Loaded Firmwares");
        String htmlOptions = "";
        for (int i = 0; i < firmwares.size(); i++) {
            String htmlOption = "<input type=\"radio\" id=\"$ID\" name=\"firmware\" value=\"$NAME\" $CHECKED><label for=\"$NAME\"><b>$NAME</b> - $DESCRIPTION</label>";
            htmlOption.replace("$ID", String(i));
            String name = firmwares[i]["name"];
            htmlOption.replace("$NAME", name);
            String description = firmwares[i]["description"];
            htmlOption.replace("$DESCRIPTION", description);
            if(i==0){
                htmlOption.replace("$CHECKED","checked");
                htmlOptions = htmlOption;
            }else{
                htmlOption.replace("$CHECKED","");
                htmlOptions = htmlOptions + "<br>" + htmlOption;
            }
        }
        String htmlPage = file.readString();
        htmlPage.replace("$OPTIONS",htmlOptions);
        Serial.println("End of getConfigPage");
        return htmlPage;
    }

    String getFirmwareConfigPage(String firmwareName){
        HTTPClient http;
        File file = SPIFFS.open("/config-firmware.html", "r");
        StaticJsonDocument<2014> doc;
        deserializeJson(doc, config::getFirmwareList());
        JsonObject obj = doc.as<JsonObject>();
        JsonArray firmwares = obj["firmwares"];
        // Looking for Config
        String configUrl = "";
        for(int i = 0; i < firmwares.size(); i++){
            if(firmwares[i]["name"] == firmwareName){
                configUrl = firmwares[i]["url"].as<String>();
                Serial.println("Found ConfigUrl for " + firmwareName + " at " + configUrl);
                break;
            }
        }
        
        Serial.println("Firmware Config URL: " + configUrl);
        String configJson = config::getFirmwareConfig(configUrl);
        String pageHTML = file.readString();
        pageHTML.replace("$CONFIG", configJson);
        file.close();
        return pageHTML;
    }

    String getIndexPage(){
        if(SPIFFS.exists("/index.html")){
            File file = SPIFFS.open("/index.html", "r");
            Serial.println("Returning /index.html from SPIFFS!");
            String htmlContent = file.readString();
            file.close();
            return htmlContent;
        }
        String htmlContent = "<!DOCTYPE html><html><head><title>Smartinizer - Wifi Config</title><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"><link rel=\"icon\" href=\"data:,\"><link rel=\"stylesheet\" type=\"text/css\" href=\"style.css\"></head><body><h1>Wifi Config</h1><div class=\"form\"><form class=\"login-form\" method=\"post\" action=\"/connect\"><input id=\"ssid\" type=\"text\" name=\"ssid\" placeholder=\"SSID\"/><input id=\"pw\" type=\"password\" name=\"pw\" placeholder=\"PASSWORD\"/><button type=\"submit\" class=\"button\">Connect to WIFI!</button></form></div></body></html>";
        return htmlContent;
    }

    String getStylePage(){
        if(SPIFFS.exists("/style.css")){
            File file = SPIFFS.open("/style.css", "r");
            Serial.println("Returning /style.css from SPIFFS!");
            String content = file.readString();
            file.close();
            return content;
        }
        String content = "html { font-family: Helvetica; margin: 0px auto; text-align: center; } h1 { color: #0F3376; padding: 2vh; } p { font-size: 1.5rem; } .button { display: inline-block; background-color: #008CBA; border: none; border-radius: 4px; color: white; padding: 16px 40px; text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer; }"; 
        return content;
    }
}