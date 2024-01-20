#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("Type the unit of your temperature: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    
    switch(unit){
        case 'C':
        printf("Type the temp of your local: ");
        scanf("%f", &temp);
        temp = (temp * 1.8) + 32;
        printf("Your temperature in Fahrenheit is %1.f degrees", temp);
        break;
        case 'F':
        printf("Type the temp of your local: ");
        scanf("%f", &temp);
        temp = (temp-32) / 1.8;
        printf("Your temperature in Celsius is %1.f degrees", temp);
        break;
        default:
        printf("Insert a valid temp");
    };

    return 0;
}
