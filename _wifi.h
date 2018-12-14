#ifndef WIFI_H
#define WIFI_H

#include <ESP8266WiFi.h>

void wifiConnect() {
    WiFi.begin(SSID, PASS);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
    }
}
#endif