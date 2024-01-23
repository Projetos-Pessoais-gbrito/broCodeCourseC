#include <stdio.h>

char writeName(char[], char[]);

int main()
{
    writeName("Gustavo", "Brito");

    return 0;
}

char writeName(char firstName[], char secondName[])
{
    printf("Seu nome e %s %s", firstName, secondName);
}