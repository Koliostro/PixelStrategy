#include <stdint.h>

#define AMMOUNT_CHAR 4

struct tile {
    char id;
    char sides[4];
    int8_t entropy;
};

// Rules for tiles
