#define SPIELER_BREITE 100
#define SPIELER_HOEHE 30
#define BALL_DURCHMESSER 20


int window_width = 1920;
int window_height = 1080;
int player_x = 30;
int player_y = 1920/2;


static ALLEGRO_DISPLAY *display;


int player_bewegen(int *y,int richtung)
{
    if (player_y <= 0 && richtung == 1)
    {
        //nothing
    }
    else
    {
        player_y -= 2;
    }

    if (player_y >= 1080 && richtung == 0)
    {
        //nothing
    }
    else
    {
        player_y += 2;
    }
    return player_y;
}


