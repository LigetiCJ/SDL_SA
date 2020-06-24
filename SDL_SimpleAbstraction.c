#include "SDL_SimpleAbstraction.h"
//SDL Globals

#define NULL = 0;



int SDLSA_Init(char *WindowName, int width, int height){
    SDL_Window* win = NULL;
    SDL_Surface* surface = NULL;

    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return 0;
    }else{
            win = SDL_CreateWindow(WindowName,50 ,50 , width, height, SDL_WINDOW_SHOWN);

            if (win== NULL) return NULL;

        return win;
    }

    return 0;
}

char** SDLSA_GetKeys(){


}
