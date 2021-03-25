#define SPIELER_BREITE 100
#define SPIELER_HOEHE 30
#define BALL_DURCHMESSER 20

typedef struct
{
    int breite;
    int hoehe;
    char *title;
} window;


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
p1.x = 30;
p1.y = window.hoehe/2;
p1.breite = 40;
p1.hoehe = 100;

ball ball1;
ball1.durchmesser = 30;
ball1.x = 0;
ball1.y = 0;



void player_bewegen(spieler *p1,char *richtung)
{
    if (p1.y =< 0 && *richtung == "up")
    {
        p1.y = 0;
    }
    else
    {
        p1.y -= 2;
    }

    if (p1.y => /*randunten*/ && *richtung == "down")
    {
        p1.y = 920;
    }
    else
    {
        p1.y += 2;
    }
    return p1.y;
}


void ball_bewegen (struct *ball)
{

}
