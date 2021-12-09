#include <stdlib.h>


int game_over;
int score;
int he, we;
int targetx, targety;

int width= 60;
int height = 10;

void setup()
{
    game_over = 0;
    score = 0;
  
    // Stores height and width
    he = height / 2;
    we = width / 2;

    targetx = (rand() % (width)) + 1;
    targety = (rand() % (height)) + 1;

}