#include <stdio.h>
#include <cs50.c>
#include <cs50.h>

int main(void)
{
    char* name = get_string("What is your name? ");
    int age = get_int("How old are you? ");
    char* phone = get_string("What is your phone number? ");

    printf("Name is %s. Age is %i. Phone number is %s\n", name, age, phone);
}