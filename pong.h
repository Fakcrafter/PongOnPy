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

spieler p1;
p1.x = width/2;
p1.y = 880;
p1.breite = 100;
p1.hoehe = 40;

ball ball1;
ball1.durchmesser = 30;
ball1.x = 0;
ball1.y = 0;
void player_bewegen(spieler *p1, richtung)
{
    if (p1.x =< /*randlinks*/ && richtung == links)
    {
        p1.x = 0;
    }
    else
    {
        p1.x -= 2;
    }

    if (p1.x => /*randrechts*/ && richtung == rechts)
    {
        p1.x = 1080;
    }
    else
    {
        p1.x += 2;
    }
    return p1.x;
}
