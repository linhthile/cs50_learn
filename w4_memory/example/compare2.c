#include <stdio.h>
#include <cs50.c>
#include <cs50.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);
}