#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

// prompt the user for a start population size, size >= 9  (begin)
// prompt the user for an ending population size (end)
// the calculate the int number of years required for size to reach the end value (end = begin - begin/4 + begin/3 = begin + begin/12 = 13/12 begin)
// year = 0, year < n, year ++, begin = 13/12 begin, stop when begin = end
// print the number of years required for the llama population, like Years: n


int main(void)
{
    // prompt for start size
    int start;
    do
    {
       start = get_int("Start size: ");
    } 
    while (start < 9);
    // prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    } 
    while (start > end);
    // calculate the year;
    int i = 0;
    do
    {
        start = start + (start/3) - (start/4);
        i++;
    }
    while (start < end);
    printf("Years: %i\n",i);
}