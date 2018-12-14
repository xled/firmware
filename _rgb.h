#ifndef RGB_H
#define RGB_H

void rgb() {
    for(int j = 0; j < 3; j++) { 
        for(int k = 0; k <= 255; k++) { 
            switch(j) { 
                case 0: setAll(k, 0, 0); break;
                case 1: setAll(0, k, 0); break;
                case 2: setAll(0, 0, k); break;
            }
            strip.show();
            delay(3);
        }
        for(int k = 255; k >= 0; k--) { 
            switch(j) { 
                case 0: setAll(k, 0, 0); break;
                case 1: setAll(0, k, 0); break;
                case 2: setAll(0, 0, k); break;
            }
            strip.show();
            delay(3);
        }
    }
}

#endif