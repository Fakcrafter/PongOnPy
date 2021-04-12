// Pong game written in C
// By Fakecrafter

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <raylib.h>
#include "pong.h"       // include headerfile






int main(int argc, char *argv[])
{
    static int player_x = 30;
    int player_y = 1920/2;
    char input;

    if (argc == 1)
    {
        printf("Too few arguments!\n");
        return 0;
    }
    else
    {
        if (argv[1] == "2")
        {
            int mode = 2;
        }
        else if(argv[1] == "1")
        {
            int mode = 1;
        }
    }

    // Init


    //ToDo: make screen resolution adjustable or fullscreen





    //Create Display
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Pong");

    sleep(5);

    // destroy everything and quit the program
    CloseWindow();
    return 0;
}







