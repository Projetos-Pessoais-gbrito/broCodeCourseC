#include <stdio.h>
#include <math.h>

void main(){

    double a;

    double b;
-+
    printf("Insira o valor do lado a do triangulo: ");
    scanf("%lf", &a);
    
    printf("\nInsira o valor do lado b do triangulo: ");
    scanf("%lf", &b);

    double hypotenuse = sqrt((pow(a, 2)) + (pow(b, 2)));

    printf("The hypotenuse of the triangle is: %lf", hypotenuse); 
}