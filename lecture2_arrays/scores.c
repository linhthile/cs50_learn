#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

const int N = 3;
float average(int length, int array[]);

int main(void)
{
    int scores[N];
    for (int i = 0; i <N; i++)
    {
        scores[i] = get_int("%i n/");
    }
    printf("Average: %f\n",average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int j = 0; j < length; j++)
    {
        sum+= array[j];
    }
    return sum/ (float) length;
}