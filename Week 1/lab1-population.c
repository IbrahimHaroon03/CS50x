#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startSize = 0;
    int endSize = 0;
    int popIncrease = 0;
    int popDecrease = 0;
    int years = 0;

    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    int newPop = startSize;

    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    if (startSize == endSize)
    {
        printf("Years: 0\n");
    }
    else if (endSize > startSize)
    {
        do
        {
            popIncrease = newPop / 3;
            popDecrease = newPop / 4;
            newPop = newPop + popIncrease - popDecrease;
            years++;
        }
        while (newPop < endSize);

        printf("Years: %i\n", years);
    }
}