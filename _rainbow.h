#ifndef RAINBOW_H
#define RAINBOW_H

void rainbow() {
    for(uint16_t j = 0; j < 256 * 5; j++) {
        for(uint16_t i = 0; i < strip.numPixels(); i++) {
            strip.setPixelColor(i, wheel(((i * 256 / strip.numPixels()) + j) & 255));
        }
        strip.show();
        delay(20);
    }
}

#endif