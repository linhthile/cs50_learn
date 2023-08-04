#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%i\n", x + y);
    
}