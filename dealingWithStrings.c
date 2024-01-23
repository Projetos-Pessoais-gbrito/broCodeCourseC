#include <stdio.h>
#include <string.h>

int main()
{

    char firstName[] = "Gustavo";

    char secondName[] = "Brito";

    // strlwr(firstName); // converts a string to lowercase

    // strupr(firstName); // converts a string to uppercase

    // strcat(firstName, secondName); // appends string2 to end of stringl

    // strncat(firstName, secondName, 2); // appends n characters from string2 to str

    // strcpy(firstName, secondName); //copy string2 to stringl

    // strncpy(firstName, secondName, 2); //copy n characters of string2 to stringl

    int result = strlen(firstName); // returns string length as int

    // int result = strcmp(stringl, string2);   // string compare all characters
    // int result - strncmp(stringl, string2, 1);  // string compare n characters
    // int result = strcmpi(firstName, firstName);  // string compare alll (ignore case)
    // int result = strnicmp(); // string compare n characters (ignore case)

    printf("%d", result);

    return 0;
}
