#ifndef STROBE_H
#define STROBE_H

void strobe(byte red, byte green, byte blue, int count, int wait, int pause) {
    for(int j = 0; j < count; j++) {
        setAll(red, green, blue);
        strip.show();
        delay(wait);

        setAll(0, 0, 0);
        strip.show();
        delay(wait);
    }
    delay(pause);
}

#endif