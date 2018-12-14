#ifndef SERVER_H
#define SERVER_H

#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

ESP8266WebServer server(SERVER_PORT);

void handleNotFound() {
    server.send(404, "text/plain", "Not found");
}

void handleRoot() {
    for (uint8_t i=0; i<server.args(); i++){
        const String key = server.argName(i);
        const String value = server.arg(i);
  
        Serial.println("Param: " + key + "=" + value);
  
        if (key == "rgb") {
            // int commaIndex = value.indexOf(',');
            // int secondCommaIndex = value.indexOf(',', commaIndex + 1);
            
            // String firstValue = value.substring(0, commaIndex);
            // String secondValue = value.substring(commaIndex + 1, secondCommaIndex);
            // String thirdValue = value.substring(secondCommaIndex + 1);
    
            // uint8_t red   = firstValue.toInt();
            // uint8_t green = secondValue.toInt();
            // uint8_t blue  = thirdValue.toInt();
    
            // setAll(red, green, blue);
            
            server.send(200, "text/plain", "Color is set to: rgb()");
        }
        else if(key == "effect") {
            setAll(0, 0, 0);
            current = value.toInt();
            server.send(200, "text/plain", "Effect applied");
        }
        else {
            handleNotFound();  
        }
    }
}

void httpServerStart() {
    server.begin();
    server.sendHeader("Access-Control-Max-Age", "10000");
    server.sendHeader("Access-Control-Allow-Methods", "POST,GET,OPTIONS");
    server.sendHeader("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept");

    server.on("/", handleRoot);
    server.onNotFound(handleNotFound);
}

void httpServerListen() {
    server.handleClient();
}


#endif