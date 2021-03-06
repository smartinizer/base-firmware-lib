#ifndef ConfigHandler_h
#define ConfigHandler_h

#include <SPIFFS.h>
#include <tuple>
#include <ArduinoJson.h>
#include <HTTPClient.h>

namespace config{
    String readFile(String fileName);
    void writeWifiCredentials(String ssid, String pw);
    void writeUpdateConfig(String firmware_url);
    void deleteWifiCredentials();
    std::tuple<String, String> getWifiCredentialsfromwpaconf();
    boolean checkForUpdateConfig();
    String getUpdateConfig();
    void deleteUpdateConfig();
    void downloadFirmwareList(String url);
    String getFirmwareList();
    String getFirmwareConfigSchema(String url);
    void writeFirmwareConfig(String firmwareConfig);
    String getConfigByKey(String key);
    void downloadStaticFiles();
    void cleanFlashExceptFirmwareAndWifiConf();
    void downloadFile(String url, String filename, bool overwrite);
}

#endif // ConfigHandler_h