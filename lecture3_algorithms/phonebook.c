#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495","+1-949-568"};
    string name = get_string(names,"Names: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf(numbers[i]);
            return 0;
        }
    }
    printf("Not found");
    return 1;
}
