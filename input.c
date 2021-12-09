#include <conio.h>
#include "set_up.h"

int flag;

void input()
{
    if (kbhit()) {
        switch (getch()) {
        case 'w':
            flag = 4;
        break;
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'z':
            game_over = 1;
            break;
        }
    }
}