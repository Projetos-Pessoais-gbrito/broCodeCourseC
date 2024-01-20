#include <stdio.h>
#include <math.h>

void main(){
    double A = sqrt(49);
    double B = pow(9, 2);
    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.99);
    double F = fabs(-198);
    double G = log(3);
    double H = cos(45);
    double I = sin(45);
    double J = tan(45);

    printf("Raiz quadrada de 49 e %.1lf\n", A);
    
    printf("9 elevado a dois e %.1lf", B);
    
    printf("\n%d", C);
    
    printf("\n%d", D);
    
    printf("\n%d", E);
    
    printf("\nO absoluto de -198 e %1.lf", F);
    
    printf("\n%lf", J);


    const double PI = 3.1416;

    double radius;

    printf("\nInsert the radius of the circle: ");
    scanf("%lf", &radius);

    double circumference = 2 * PI * radius;
    double area = PI * pow(radius, 2);
        
    printf("The circumference of the circle is %lf", circumference);
    
    printf("\nThe area of the circle is: %lf", area);

};