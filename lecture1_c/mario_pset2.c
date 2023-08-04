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
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // print left hashes
        for (int k = n-i; k > 0; k--)
        {
            printf("#");
        }
        // print gap
        printf("  ");
        // print right hashes
        for (int h = n-i; h >0; h--)
        {
            printf("#");
        }
        printf("\n");
        i++;
    } 
    while (i < n);
    return 0;
}