#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%i", &n);

    int i = 0;
    do
    {
        // print spaces
        for (int j = n-i; j > 0; j--)
        {
            printf(" ");
        }
        // print left hashes
        for (int k = -1; k < i ; k++)
        {
            printf("#");
        }
        // print gap
        printf("  ");
        // print right hashes
        for (int h = -1; h < i; h++)
        {
            printf("#");
        }
        printf("\n");
        i++;
    } 
    while (i < n);
    return 0;
}