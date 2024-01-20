#include <stdio.h>


void main() {
    
    int nota;

    printf("Insira sua nota: ");
    scanf("%d", &nota);

    switch (nota){
        case 10:
        printf("Voce foi muito bem");
        break;
        case 8:
        printf("Voce foi bem");
        break;
    default:
        printf("Insira uma nota valida");
    };
}