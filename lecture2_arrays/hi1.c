#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%s\n", s);
    printf("%c%c%c\n", s[0], s[1], s[2]);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3], s[4]);
}