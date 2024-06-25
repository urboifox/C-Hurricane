#include "headers/cnumber.h"

int round(double n) {
    return n + .5;
}

int floor(double n) {
    return n;
}

int ceil(double n) {
    int in = n;
    if (in == n)
        return n;
    return n + 1;
}
