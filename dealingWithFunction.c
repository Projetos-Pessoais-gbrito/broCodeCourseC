#include <stdio.h>

void happyBirthday(char name[], int age)
{
    printf("Your name is %s\n", name);
    printf("Your age is %d", age);
}

void main()
{
    char name[25];
    int age;

    happyBirthday("Gustavo", 24);
}
