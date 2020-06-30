#define NULL = 0;


#include "SDL_SimpleAbstraction.h"

//SDL_SA Globals

SDL_Window* win = NULL;
SDL_Surface* surface = NULL;

int SDLSA_DRAW_MODE;
int colors[16];


int SDLSA_Init(char *WindowName, int width, int height){


    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return 0;
    }else{
            win = SDL_CreateWindow(WindowName,50 ,50 , width, height, SDL_WINDOW_SHOWN);

            if (win== NULL) return NULL;

        return win;
    }

    return 0;
}

void SDLSA_GetKeys(){


}

void SDLSA_PSet(int x, int y, int color){

    switch(SDLSA_DRAW_MODE){
        case SDLSA_DRAW_MODE_PALLET:
        break;
        case SDLSA_DRAW_MODE_RGB:
            //place int directly into texture;
        break;
        case SDLSA_DRAW_MODE_RGBA:
            //place int directly into texture with blending;
        break;
        case SDLSA_DRAW_MODE_FANCY_RGBA:
            //place int directly into texture with fancy blending;
        break;



    }



        //look up from pallet and place into texture;

}
