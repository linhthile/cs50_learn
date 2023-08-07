#include <stdio.h>

// assign neccesary variables

int main(void)
{
    int a = 25;
    int b = 10;
    int c = 5;
    int d = 1;
    int m;  //input the money
    int quotient = 0;

    do
    {
        printf("Enter m (Enter a negative value to stop): ");
        scanf("%i", &m); // Corrected the scanf call by adding & before m

    } while (m < 0);

    if (m == 0)
    {
        printf("Total time: 0");
    }
    else
    {
        while (m > 0)
        {
            quotient += m / a;  
            m %= a;  //calculate the remainder of the division

            quotient += m / b;
            m %= b;

            quotient += m / c;
            m %= c;

            quotient += m / d;
            m %= d;
        }
        printf("Total time: %i\n", quotient);
        return 0;
    }
}
