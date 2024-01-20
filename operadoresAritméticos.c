#include <stdio.h>

int main (){
    
    int a = 5;

    int b = 2;

    float divisao = a / (float) b; // Para fazer divisão corretamente ou eu transformo o divisor para float ou eu transformo a variavel do divisor para float antes.

    int x = 10;

    x+=1;
    
    printf("O resultado da divisao é %f\n", divisao);
    
    printf("O resultado da divisao é %d", x);

    return 0;
}