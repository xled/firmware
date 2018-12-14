#ifndef POLICE_H
#define POLICE_H

void police() {
    strobe(255, 0, 0, 4, 50, 0);
    strobe(0, 0, 255, 4, 50, 0);
}

#endif