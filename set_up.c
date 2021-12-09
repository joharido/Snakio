#include "outline.c"

int game_over = 0;
int score;
int he, we;
int targetx, targety;

void setup()
{
    game_over = 0;
  
    // Stores height and width
    he = height / 2;
    we = width / 2;

    targetx = (rand() % (width)) + 1;
    targety = (rand() % (height)) + 1;

    score = 0;
}