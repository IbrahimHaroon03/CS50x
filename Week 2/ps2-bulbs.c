#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
void decimal_to_binary(int x);

int main(void)
{
    // TODO
    string message = get_string("Message: ");
    for (int i = 0; i < strlen(message); i++)
    {
        decimal_to_binary(message[i]);
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

void decimal_to_binary(int x)
{
    // Created an array to contain the remainders
    int remainder[] = {0, 0, 0, 0, 0, 0, 0, 0};
    // The counter is for the position in the array
    int counter = 7;
    // while the variable passed through is greater than zero do this
    while (x > 0)
    {
        // Find the remainder
        remainder[counter] = x % 2;
        // Divide the number by 2
        x = x / 2;
        // Change the position of the array
        counter--;
    }

    for (int i = 0; i < 8; i++)
    {
        print_bulb(remainder[i]);
        if (i == 7)
        {
            printf("\n");
        }
    }
}