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
label1:
    targetx = rand() % width;
    if (targetx == 0)
        goto label1;
label2:
    targety = rand() % height;
    if (targety == 0)
        goto label2;
    score = 0;
}