#ifndef TILE
#define TILE

#include <SDL2/SDL_image.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>

void initSpriteSheet(SDL_Surface *SpriteSheet, SDL_Texture *texture, SDL_Renderer *render); 
void selectSprite(SDL_Surface *SpriteSheet, SDL_Rect *posOnSpriteSheet,  int Xoffset, int Yoffset); 
void selectPosOn(SDL_Rect *posOnScreen, int Xoffset, int Yoffset);

#endif
