#include "display_tile.h"

const int sizeOfSprite = 16;

void selectSprite(SDL_Surface *SpriteSheet, SDL_Rect *posOnSpriteSheet,  int Xoffset, int Yoffset) {
    posOnSpriteSheet -> x = Xoffset * sizeOfSprite;
    posOnSpriteSheet -> y = Yoffset * sizeOfSprite;
    
    posOnSpriteSheet -> h = sizeOfSprite;
    posOnSpriteSheet -> w = sizeOfSprite; 
}

void selectPosOn(SDL_Rect *posOnScreen, int Xoffset, int Yoffset) {
    posOnScreen -> x = Xoffset * sizeOfSprite;
    posOnScreen -> y = Yoffset * sizeOfSprite;
    
    posOnScreen -> h = sizeOfSprite;
    posOnScreen -> w = sizeOfSprite; 
}
