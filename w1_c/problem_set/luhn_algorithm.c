#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*  Luhn’s Algorithm - Validating credit cards
    step 1: prompt input from the user, devoid of hyphen, don't start with 0. Type long
    step 2: calculate the checksum: if the final digit is or not 0
    step 3: check the length and starting digits    
    step 4: print: AMEX\n, MASTERCARD\n, VISA\n, INVALID\n
*/

int main(void)
{
    // step 1: prompt user input
    long long n;
    do
    {
        printf("Enter your  card number: ");
        scanf("%lld", &n);
        getchar();
    } 
    while (n <= 0);
    
    // step 2: calculate the checksum
    // copy original number, calculate the number of digit in that input
    long long remain = n;
    int length = 0;
    int sum_a = 0;  //second last sum
    int sum_b = 0;  // last sum
    int sum;

    // calculate the length of the number
    for (length = 0; remain != 0; length++)
    {
        int lastdigit = remain % 10;
        remain /= 10;


        // calculate the sum of from the last 2 digit to the beginning
        if (length % 2 == 1)
        {   
            int multiply = lastdigit*2;
            sum_a += (multiply >= 10) ? (multiply % 10 + multiply / 10 % 10) : multiply;
        }
        else
        {
            sum_b += lastdigit;  // sum of the reset digits
        }
    }
    // calculate the final sum
    sum = sum_a + sum_b;

    // print out to check result
    printf("length: %i\n",length);
    printf("sum of a: %i\n", sum_a);
    printf("sum of b: %i\n", sum_b);
    printf("sum: %i\n", sum);

    // check if the card is valid
    if (sum % 10 == 0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }

    // step 3: check the length and starting digits
    // american express: 15 digit, start with 34 and 37
    // master card: 16 digit,  51,52,53,54, 55
    // visa: 13 and 16 digit, 4
    // decimal number 


    // calcuate the first 2 and 1 digits of the card number
    long long start2digit = n / (long long)pow(10,length - 2);
    long long start1digit = n / (long long)pow(10,length - 1);

    printf("%i\n",start2digit);
    printf("%i\n",start1digit);

    // check the type of card
    if (length == 15 && start2digit == 34 || start2digit == 37)
    {
        printf("AMEX\n");
    }
    else if (length == 16 && start2digit == 51 || start2digit == 52 || start2digit == 53 || start2digit == 54 || start2digit == 55)
    {
        printf("MASTERCARD\n");
    }
    else if (length == 13 || length == 16 && start1digit == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("None of them\n");
    }
    return 0;
}



