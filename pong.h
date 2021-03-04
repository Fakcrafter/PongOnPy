#define SPIELER_BREITE 100
#define SPIELER_HOEHE 30
#define BALL_DURCHMESSER 20

typedef struct
{
    int durchmesser;
    int x;
    int y;
} ball;

typedef struct
{
    int breite;
    int hoehe;
    int x;
    int y;
} spieler;



void player_bewegen(player, &x, richtung)
{
    if (x =< /*randlinks*/ && richtung == links)
    {
        *x = 0;
    }
    else
    {
        *x -= 2;
    }

    if (x => /*randrechts*/ && richtung == rechts)
    {
        *x = 1080;
    }
    else
    {
        *x += 2;

}
