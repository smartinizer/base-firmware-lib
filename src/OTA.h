#ifndef OTA_h
#define OTA_h

#include <ESP32httpUpdate.h>
#include <ConfigHandler.h>

namespace update {

    void shedule_update(String firmware_url);
    void update_if_sheduled();

}

#endif // OTA_h