// Pong game written in C
// By Fakecrafter

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "pong.h"       // include headerfile






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
    if (!al_init() || !al_install_keyboard())
    {
        printf("Initialisierung: Fehler\n");
    }
    printf("Initialisierung erfolgreich\n");


    //Create Display
    //ToDo: adjust screen resolution to monitor


    display = al_create_display(1920, 1080);
    sleep(5);




    // destroy everything and quit the program
    al_destroy_display(display);
    return 0;
}







