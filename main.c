// Pong game written in C
// By Fakecrafter


#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>        // import SDL2 Library
//#include "pong.h"       // include headerfile

int main(int argc, char *argv[])  {

    // attempt to initialize graphics system
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }


    printf("initialization successful!\n");



    // clean up resources before exiting
    SDL_Quit();
    return 0;
}


