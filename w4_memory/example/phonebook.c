#include <stdio.h>
#include <cs50.c>
#include <cs50.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv","a");

    string name = get_string("Name: ");
    string number = get_String("Number: ");

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
}