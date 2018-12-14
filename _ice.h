#ifndef ICE_H
#define ICE_H

void ice() {
    setAll(0, 0, 0);
    int index = random(strip.numPixels());

    strip.setPixelColor(index, strip.Color(255, 255, 255));
    strip.show();
    delay(20);

    strip.setPixelColor(index, strip.Color(0, 0, 0));
    strip.show();
    delay(random(50, 500));
}

#endif