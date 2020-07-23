#ifndef SDL_SIMPLEABSTRACTION_H_INCLUDED
#define SDL_SIMPLEABSTRACTION_H_INCLUDED

#include "SDL2/SDL.h"

#define SDLSA_DRAW_MODE_PALLET 0
#define SDLSA_DRAW_MODE_RGB 1
#define SDLSA_DRAW_MODE_RGBA 2
#define SDLSA_DRAW_MODE_FANCY_RGBA 3
char SDLSA_KEYS[13];

int SDLSA_Init(char* WindowName, int width, int height);
void SDLSA_GetKeys();
void SDLSA_SetDrawMode(int drawMode);
void SDLSA_PSet(int x, int y, int color);
void SDLSA_ReDraw();
void SDLSA_SetCanvasSize(int width, int height);



#endif // SDL_SIMPLEABSTRACTION_H_INCLUDED
