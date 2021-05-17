#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <ConfigHandler.h>


namespace webbuilder{

    JsonArray getFirmwares();
    String getConfigPage();
    String getFirmwareConfigPage(String firmwareName);
    String getIndexPage();
    String getStylePage();
}