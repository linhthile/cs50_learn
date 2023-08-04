// Prints an n-by-n grid of bricks, re-prompting user for positive integer

#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int get_size(void);
void print_grid(int n);


int main(void)
{
    // get size of grid 
    int n = get_size();
    // print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
