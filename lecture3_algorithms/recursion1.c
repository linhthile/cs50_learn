
#include <cs50.c>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
       for (int i = 0; i < n; i++)
       {
        printf("#");
       }
       printf("\n");
    }
    
    // for(int i = 0; i < n; i++)
    // {
    //     printf("#");
    // }
    // printf("\n");
}