#ifndef UTILS_H
#define UTILS_H

uint32_t wheel(byte pos) {
    if(pos < 85) {
        return strip.Color(pos * 3, 255 - pos * 3, 0);
    } 
    else if(pos < 170) {
        pos -= 85;
        return strip.Color(255 - pos * 3, 0, pos * 3);
    } 
    else {
        pos -= 170;
        return strip.Color(0, pos * 3, 255 - pos * 3);
    }
}

#endif