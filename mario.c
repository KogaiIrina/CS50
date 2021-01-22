#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    
    do
    {
        height = get_int("What height building should be?\n");
    }
    while (height < 1 || height >= 9);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j + i < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    } 
}

