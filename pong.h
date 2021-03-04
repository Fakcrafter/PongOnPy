#define SPIELER_BREITE 100
#define SPIELER_HOEHE 30
#define BALL_DURCHMESSER 20

void player_bewegen(player, x, richtung)
{
    if (x =< /*randlinks*/ && richtung == links)
    {
        *x = /*randlinks*/;
    }
    else
    {
        *x -= 2;
    }

    if (x => /*randrechts*/ && richtung == rechts)
    {
        *x = /*randrechts*/;
    }
    else
    {
        *x += 2;

}
