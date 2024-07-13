#include "utilities.h"
#include <cstdint>

int8_t setBit(int8_t number, int8_t position) {
    if(position > 8) {
        return -1;
    }

    return number | ((int8_t)1 << position);
}

int8_t clearBit(int8_t number, int8_t position) {
    if (position > 8) {
        return -1;
    }

    return number & ~((int8_t)1 << position);
}

bool readBit(int8_t number, int8_t position) {
    if(position > 8) {
        return false;
    }

    return (number >> position) & (int8_t)1;
}
