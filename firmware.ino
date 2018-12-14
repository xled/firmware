#include "_config.h"

int current = DEFAULT;

#include "_strip.h"
#include "_utils.h"
#include "_sparkle.h"
#include "_ice.h"
#include "_rgb.h"
#include "_strobe.h"
#include "_police.h"
#include "_rainbow.h"
#include "_xmas.h"
#include "_wifi.h"
#include "_server.h"

void setup(void) {
    stripInit();
    wifiConnect();
    httpServerStart();
}

void loop(void) {
    httpServerListen();

    switch(current) { 
        case SPARKLE: sparkle(); break;
        case RGB: rgb(); break;
        case STROBE: strobe(255, 255, 255, 10, 50, 1000); break;
        case ICE: ice(); break;
        case RAINBOW: rainbow(); break;
        case XMAS: xmas(); break;
        case POLICE: police(); break;
    }
}