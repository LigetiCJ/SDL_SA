#include "stdio.h"
#include "SDL_SimpleAbstraction.h"


int init_tetris();
int update_tetris(float delta);
int render_tetris(float delta);
int destroy_tetris();




int update_tetris(float delta){
    char currentBlock = 0;

    short field[30];


    return 1;
}

/**
block types
    0:I
    1:J
    2:L
    3:O
    4:S
    5:Z
    6:T
moveDirection
    0x0 none
    0x1 down
    0x2 left
    0x4 right
**/

char move(char blockType, char blockX, char blockY, char blockRotation, char moveDirection){
    //check collision of block at blockX & blockY

//array of arrays of block layouts


    char newPosX = blockX + ((0x4&moveDirection)>>2) - ((0x2&moveDirection)>>1);


}









int main(int argc, char **argv){
    SDL_Window* w = SDLSA_Init("Hello, SDLSA", 100,100);
    printf("%i", w);
    return 0;
}
