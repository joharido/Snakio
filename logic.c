#include "input.h"
#include "set_up.h"

void logic()
{
    sleep(0.01);
    switch (flag) {
    case 1:
        he--;
        break;
    case 2:
        we++;
        break;
    case 3:
        he++;
        break;
    case 4:
        we--;
        break;
    default:
        break;
    }
  
    // If the game is over
    if (we < 0 || we > height || he < 0 || he > width)
        game_over = 1;
  
    // If snake reaches the target, update the score
    if (we == targetx && he == targety) {
        targetx = (rand() % (width)) + 1;
        targety = (rand() % (height)) + 1;
        score += 5;
  
    }