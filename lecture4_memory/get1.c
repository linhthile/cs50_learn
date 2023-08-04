#include <stdio.h>



int main(void)
{
    char s[4];
    printf("s:");
    scanf("%s", s);  //s is already an address
    printf("s: %s\n", s);
}