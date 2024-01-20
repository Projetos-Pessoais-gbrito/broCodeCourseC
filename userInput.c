#include <stdio.h>


// #QUANDO FOR FAZER UM INPUT COM FGETS ELE TEM Q SER O PRIMEIRO, ANTES DO SCANF. FGETS É USADO PARA RECEBER INPUT COM ESPAÇO.

int main() {
    int idade;

    char nome[50];

    printf("Qual seu nome e sobrenome ?\n");
    
    fgets(nome, 50, stdin); // stdin significa standard input

    printf("Quantos anos voce tem ?");

    scanf("%d", &idade); // Esse método serve para armazenar um número qualquer dentro da variavel. 

    printf("A pessoa tem %d anos\n", idade);

    printf("Seu nome e %s", nome);
    
    return 0;
}