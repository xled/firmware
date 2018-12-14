#ifndef XMAS_H
#define XMAS_H

void xmas() {
    byte colors[] = {
        255, 0,   0,
        0,   180, 0,
        0,   0,   150,
        180, 150, 0
    };

    for (int i = 0; i < strip.numPixels(); i++) {
        if((millis() / 1000) % 2 == 0) {
            strip.setPixelColor(i, strip.Color(
                colors[(i % 4) * 3], 
                colors[(i % 4) * 3 + 1], 
                colors[(i % 4) * 3 + 2]
            ));
            
        } 
        else {
            strip.setPixelColor(i, strip.Color(
                colors[(i % 4)] / 20, 
                colors[(i % 4) * 3 + 1] / 20, 
                colors[(i % 4) * 3 + 2] / 20
            ));
        }
    }
    strip.show();
}

#endif