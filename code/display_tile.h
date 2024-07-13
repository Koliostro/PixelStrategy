#ifndef TILE
#define TILE

#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>

// Function for selecting sprite from initialized sprite sheet
void selectSprite(SDL_Surface *SpriteSheet, SDL_Rect *posOnSpriteSheet,  int Xoffset, int Yoffset); 

// Function for selecting position of sprite on screen
void selectPosOn(SDL_Rect *posOnScreen, int Xoffset, int Yoffset);

#endif
