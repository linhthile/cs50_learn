#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's X? ");
    int y = get_int("what 's Y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is not less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}
