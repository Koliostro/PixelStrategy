#include "tiles.h"
#include "display_tile.h"
#include "utilities.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_video.h>
#include <cstddef>

// Size of window
const Uint16 WIDTH = 600;
const Uint16 HEIGHT = 600;

int main (int argc, char ** args) {
    SDL_Window *window = NULL;

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "Failed to init video %s\n", SDL_GetError());
        return 1;
    }
    
    window = SDL_CreateWindow("Text", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);

    if (window == NULL) {
        fprintf(stderr, "Failed to create window %s\n", SDL_GetError());
        return 1;
    }
    
    bool isStop = false;
    SDL_Event event;

    SDL_Renderer *Render = NULL;

    Render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); 

    // Rects for displaty must be not pointers because if they are 
    // pointers sprites don't display

    SDL_Rect posOnScreen;
    SDL_Rect posOnSpriteSheet;

    SDL_Surface *allSprites = NULL;
    SDL_Texture *textture = NULL;
    
    // Init the spritesheet

    allSprites = IMG_Load("../sprites/spritesheet.bmp");
    textture = SDL_CreateTextureFromSurface(Render, allSprites); 

    // ====================
    // Select pos and sprites
    
    selectSprite(allSprites, &posOnSpriteSheet, 0, 0);
    selectPosOn(&posOnScreen, 0, 0);

    // ===================
    while(!isStop) {
        while(SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT || ( event.type == SDL_WINDOWEVENT && event.window.type == SDL_WINDOWEVENT_CLOSE)) {
                isStop = true;
            }
        }
        if(isStop) {break;}
       
       SDL_RenderClear(Render); 

        SDL_RenderCopy(Render, textture, &posOnSpriteSheet, &posOnScreen);

       SDL_RenderPresent(Render);
    }
    
    SDL_DestroyRenderer(Render); 
    SDL_DestroyTexture(textture);
    SDL_FreeSurface(allSprites); 

    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}
