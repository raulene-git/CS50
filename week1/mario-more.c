#include <cs50.h>
#include <stdio.h>

int main(void)

{
    // Store Answer
    int height = get_int("height:");
    while (height <= 0)

    {
        height = get_int("height:");
    }

    // Left Row Block

    for (int row = 0; row < height; row++)
    {
        // Spaces on the left

        for (int space = 0; space < height - (row + 1); space++)
        {
            // Print Spaces
            printf(" ");
        }

        // Left Pyramid

        for (int hash = 0; hash < (row + 1); hash++)
        {
            // print#
            printf("#");
        }

        // spaces

        printf("  "); // 2 spaces

        // Right Pyramid

        for (int hash = 0; hash < (row + 1); hash++)
        {
            // print#
            printf("#");
        }

        // Print New line
        printf("\n");
    }
}
