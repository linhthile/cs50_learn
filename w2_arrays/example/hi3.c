#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n",words[0], words[1]);
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%C\n", words[1][0], words[1][1], words[1][2],words[1][3]);

}