#include <cs50.c>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

// linear search
int main(void)
{
    string strings[] =  {"battleship", "boot" , "cannon", "iron", "thimble", "top hat"};
    
    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strings[i] == s)  // it is wrong to compare in this because it is string
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}