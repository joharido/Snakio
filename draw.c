#include <conio.h>
#include "set_up.h"

int i,j;

void draw()
{
    clear;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == we && j == he)
                printf("s");
            else if (i == targetx && j == targety)
                printf("*");
            }
        }
        printf("\n");
    }
  
    printf("score = %d", score);
    printf("\n");
    printf("press Z to quit the game");
}