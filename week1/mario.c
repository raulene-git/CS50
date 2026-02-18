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

    // Row block
    for (int row = 0; row < height; row++)

    {
        // Spaces loop

        for (int space = 0; space < height - (row + 1); space++)
        {
            // Print Space
            printf(" ");
        }

        // Hashes loop

        for (int hash = 0; hash < (row + 1); hash++)
        {
            // print#
            printf("#");
        }

        // New line
        printf("\n");
    }
}
