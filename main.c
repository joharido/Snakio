#include "set_up.h"
#include "outline.c"
#include "input.c"
#include "logic.c"

void main()
{

    setup();
    boundary();
  
    // Until the game is over
    while (!game_over) {
        draw();
        input();
        logic();
    }      
}