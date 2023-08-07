#include <stdio.h>
#include <cs50.c>
#include <cs50.h>

// prompt for input
// print the number of dot vs hash in each row (height vs row number)


int main(void)
{
    int n;
    do
    {
        n = get_int("Enter n: ");
    } 
    while (n < 0 || n > 8);

    int i = n;
    do
    {   
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = n-i+1; k > 0; k--)
        {
            printf("#");
        }
        printf("\n");
        i--;
    } 
    while (i > 0);
    return 0;
}

