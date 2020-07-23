#include "stdlib.h"
#include "SDL_SimpleAbstraction.h"

//SDL_SA Globals

SDL_Window* win = NULL;
SDL_Surface* surface = NULL;
SDL_Texture* texture = NULL;
SDL_Renderer* renderer = NULL;
int CanvasWidth = -1;
int CanvasHeight = -1;

int SDLSA_DRAW_MODE = 1;
int colors[16];


int SDLSA_Init(char *WindowName, int width, int height){


    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return 0;
    }else{
            win = SDL_CreateWindow(WindowName,50 ,50 , width, height, SDL_WINDOW_SHOWN);

            if (win == NULL) return NULL;
            surface = SDL_GetWindowSurface(win);
            renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
            SDL_SetRenderTarget(renderer, texture);
            SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
            SDL_RenderClear(renderer);

        return win;
    }

    return 0;
}
void SDLSA_SetCanvasSize(int width, int height){
    Uint32 winFormat = SDL_GetWindowPixelFormat(win);

    texture = SDL_CreateTexture(renderer, winFormat, SDL_TEXTUREACCESS_TARGET, width, height);
    CanvasWidth = width;
    CanvasHeight = height;

}

void SDLSA_GetKeys(){


}

void SDLSA_ReDraw(){
    printf("%i \n%i\n", renderer, surface);

    SDL_RenderCopy(renderer, surface, NULL, NULL);
    SDL_RenderPresent(renderer);

}

void SDLSA_PSet(int x, int y, int color){
    if(CanvasWidth <= 0 || CanvasHeight <=0)
        return;

    switch(SDLSA_DRAW_MODE){
        case SDLSA_DRAW_MODE_PALLET:

        break;
        case SDLSA_DRAW_MODE_RGB:
            //place int directly into texture;
            SDL_SetRenderDrawColor(renderer, (Uint8)((color && 0xFF000000)>>6), (Uint8)((color && 0x00FF0000)>>4), (Uint8)((color && 0x0000FF00)>>2), (Uint8)((color && 0x000000FF)));
            SDL_RenderDrawPoint(renderer, x, y);
        break;
        case SDLSA_DRAW_MODE_RGBA:
            //place int directly into texture with blending;
        break;
        case SDLSA_DRAW_MODE_FANCY_RGBA:
            //place int directly into texture with fancy blending; (square RGB, Multiply by alpha, sqrt RGB, place in texture
        break;

        default:
        break;


        return;
    }



        //look up from pallet and place into texture;

}
