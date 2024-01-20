#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter the first number you want to calculate: ");
    scanf("%lf", &num1);

    printf("\nEnter the second number you want to calculate: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        printf("%.3lf", result); 
        break;
        case '-':
        result = num1 - num2;
        printf("%.3lf", result); 
        break;
        case '*':
        result = num1 * num2;
        printf("%.3lf", result); 
        break;
        case '/':
        result = num1 / num2;
        printf("%.3lf", result); 
        break;
        default: 
        printf("Insert a valid symbol or number");
        break;
    }

    return 0;
}