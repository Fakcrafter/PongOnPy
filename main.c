// Pong game written in C
// By Fakecrafter

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <raylib.h>
//#include "pong.h"       // include headerfile






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


    //Create Display
    InitWindow(GetScreenWidth(), GetScreenHeight(), "Pong");


    //Player 1: paddle
    Vector2 paddlePosition1 = { 30, (float)GetScreenHeight()/2};
    Vector2 paddleSize1 = { 30, 120};

    //Player 2: paddle
    Vector2 paddlePosition2 = { GetScreenWidth()-60, (float)GetScreenHeight()/2};
    Vector2 paddleSize2 = { 30, 120};


    //Ball
    Vector2 ballPosition = { (float)GetScreenWidth()/2, (float)GetScreenHeight()/2};
    Vector2 ballDiameter = {30, 30};

    SetTargetFPS(60);



    while(!WindowShouldClose())
    {

        if (IsKeyDown(KEY_D) && paddlePosition1.y > 0)          paddlePosition1.y -= 5.0f;
        if (IsKeyDown(KEY_F) && paddlePosition1.y < 1080 - 120) paddlePosition1.y += 5.0f;

        if (IsKeyDown(KEY_K) && paddlePosition2.y > 0)          paddlePosition2.y -= 5.0f;
        if (IsKeyDown(KEY_J) && paddlePosition2.y < 1080 - 120) paddlePosition2.y += 5.0f;
        //Drawing

        BeginDrawing();


            ClearBackground(BLACK);
            DrawRectangleV(paddlePosition1, paddleSize1, WHITE);
            DrawRectangleV(paddlePosition2, paddleSize2, WHITE);
            DrawRectangleV(ballPosition, ballDiameter, WHITE);


        EndDrawing();
    }
    // destroy everything and quit the program
    CloseWindow();
    return 0;
}







