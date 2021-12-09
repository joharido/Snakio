#include <stdio.h>
#include <stdlib.h>
#include <set_up.h>

int h, w;

// Function to draw a boundary
void boundary()
{
    for (h = 0; h < height; h++) {
        for (w = 0; w < width; w++) {
            if (h == 0 || h == height - 1 || w == 0|| w == width - 1) {
                printf("!");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    // Function Call
    boundary();
  
    return 0;
}