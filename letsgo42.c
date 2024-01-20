#include <stdio.h>
#include <stdbool.h>


void main(){
    
    int x; //declaration
    
    x=123; // initialization
    
    int y = 321; // declaration plus initialization

    int age = 24; //integer
    
    float gpa = 2.08; //floating point number
    
    char grade = 'M'; //single character
    
    char name[] = "Gustavo"; //array of characters

    double CPF = 425.52084842;

    char f = -50; // Variaveis do tipo char consegue armazenar apenas 1 byte (-128 a 127) %d ou %c;
    
    unsigned char g = 255; // Variaveis do tipo unsigned char consegue armazenar apenas 1 byte, porém voce consegue armazenas até (255) %d ou %c;
    
    short h = 32767; // Esse tipo de variavel armazena 2 bytes de memoria (-32,768 até +32,767);
    
    unsigned short i = 65535; // Esse tipo de variavel armazena 2 bytes de memoria (0 até 65,535);
    
    int j = 2174783647; // Esse tipo de variavel armazena até 4 bytes de memoria (-2,147,483,648 até 2,147,483,648), para usar essa variavel em algum lugar basta colocar %d;
    
    unsigned int z = 4294967295; // Esse tipo de variavel armazena até 4 bytes de memoria (0 até 4,294,967,295), para usar essa variavel em algum lugar basta colocar %u;
    
    bool boolean = false;
    
    printf("Eu tenho %d anos\n",y) ; // Para usar uma variavel inteira (tipo int)em uma string é indicada pela letra d e depois da frase vem a variavel.
    
    printf("Meu nome é %s\n",name) ; // Para usar uma variavel do tipo char eu tenho que colocar %s de string.
    
    printf("Eu sou %c\n", grade) ; // Para usar uma variavel do tipo char só que quando for apenas uma letra eu tenho que colocar %c de char.
    
    printf("Meu gpa é %f\n", gpa) ; // Para usar uma variavel do tipo float basta colocar %f de float, os floats conseguem armazenar até 32 bits que convertendo fica entre 7 - 8 numeros.
    
    printf("Meu cpf é %lf\n", CPF) ; // Para usar uma variavel do tipo double basta colocar %lf de double, os doubles conseguem aramzenar o dobro do float, totalizando entre 15-16 numeros, o double é mais preciso que float, portanto é melhor usar mais double.
    
    printf("%d\n", boolean) ; 

    printf("%d g\n", g);
    
    printf("%d f", f);

};

