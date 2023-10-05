#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter height: ");
    }
    while ((height < 1) || (height > 8));

    for (int i = 0; i < height; i++)
    {
        for (int x = height - 1; x > i; x--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}