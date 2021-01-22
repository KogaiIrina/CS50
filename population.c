#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // TODO: Prompt for start size
    int startSize;
    do
    {
        startSize = get_int("How many llamas do you have?\n");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("How many llams do you need?\n");
    }
    while (endSize < startSize);
    // TODO: Calculate number of years until we reach threshold
    
    if (startSize == endSize)
    {
        printf("Years: 0\n");
    }
    else
    {
        int counter = 0;
        int allLlams = startSize;

        do
        {
            float newResult = allLlams + allLlams / 3 - allLlams / 4;
            allLlams = (int) newResult;
            counter ++;
        }
        while (allLlams < endSize);

        // TODO: Print number of years
        printf("Years: %i\n", counter);
    }
}
