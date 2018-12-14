#ifndef STRIP_H
#define STRIP_H

#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, D2, NEO_GRB + NEO_KHZ800);

void setAll(byte red, byte green, byte blue) {
    for(byte i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, strip.Color(red, green, blue));
    }
    
    strip.show();
}

void stripInit() {
    strip.begin();
    strip.show();
}

#endif