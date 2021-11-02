#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int height, row, collum, space;

    do
    {
        height = get_int("What's the height of your pyramid?");
    }
    while (height < 1 || height > 8);

    for(row = 0; row < height; row++)
    {
        for(space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        for(collum = 0; collum <= row; collum++)
        {
            printf("#");
        }

        printf("  ");

        for(collum = 0; collum <= row; collum++)
        {
            printf("#");
        }

        printf("\n");
    }
}