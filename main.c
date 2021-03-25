// Pong game written in C
// By Fakecrafter


//#define al_init()    al_install_system(ALLEGRO_VERSION_INT, atexit)

#include "allegro5/allegro.h"
//#include <allegro5/allegro_image.h>
#include <stdio.h>
#include <stdlib.h>
//#include <ncurses.h>        // import SDL2 Library
//#include "pong.h"       // include headerfile

int main(int argc, char *argv[])
{
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
    if (!al_init())
    {
        printf("Initialisierung: AllegroMain Fehler\n");
    }

    return 0;
}


