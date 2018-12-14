#ifndef SPARKLE_H
#define SPARKLE_H

void sparkle() {
    setAll(0, 0, 0);

    for (byte i = 0; i < 3; i++) {
        byte index = random(strip.numPixels());
        strip.setPixelColor(index, strip.Color(255, 255, 255));
    }

    strip.show();
    delay(10);
}

#endif