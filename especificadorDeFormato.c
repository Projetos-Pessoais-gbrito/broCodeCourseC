#include <stdio.h>

int main(){

    float diminuindoNumerosAposVirgula = 5.7599999;
    
    float diminuindoNumerosAposVirgula2 = 6.8099999;
    
    float diminuindoNumerosAposVirgula3 = 7.45699999;

    
    printf("O item custa $%-7.2f\n", diminuindoNumerosAposVirgula); // Para diminuir os numeros após a virgula, basta colocar quantas voce quer basta fazer colocar %.2 ou o numero que quiser, caso queira alinhar tudo a esquerda faça o "-" depois da %.
    
    printf("O item custa $%7.2f\n", diminuindoNumerosAposVirgula2);
    
    printf("O item custa $%f", diminuindoNumerosAposVirgula3);
}