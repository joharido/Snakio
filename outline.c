#include <stdio.h>
#include <stdlib.h>
int h, w;
int width= 60;
int height = 10;

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