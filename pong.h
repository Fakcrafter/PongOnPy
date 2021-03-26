#define SPIELER_BREITE 100
#define SPIELER_HOEHE 30
#define BALL_DURCHMESSER 20


typedef struct
{
    int durchmesser;
    int x;
    int y;
} ball;



int player_bewegen(struct *spieler,int richtung)
{
    if (p1.y <= 0 && richtung == 1)
    {
        //nothing
    }
    else
    {
        p1.y -= 2;
    }

    if (p1.y >= 1080 && richtung == 0)
    {
        //nothing
    }
    else
    {
        p1.y += 2;
    }
    return p1.y;
}


