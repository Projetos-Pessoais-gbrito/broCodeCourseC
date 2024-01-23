#include <stdio.h>
#include <string.h>
int main()
{

    char name[25];

    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Insert you name: ");
        fgets(name, 25, stdin);
    };

    printf("Hello %s !!", name);
    return 0;
}