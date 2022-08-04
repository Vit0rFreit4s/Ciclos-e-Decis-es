#include <stdio.h>
#include <locale.h>

/*
Criar um programa para receber 3 valores inteiros correspondendo ao lados de triângulo e informar se o triângulo é equilátero, isósceles ou escaleno.

Equilátero          Lados todos iguais
Isósceles           Dois iguais
Escaleno            Todos diferentes
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int lado1 = 0, lado2 = 0, lado3 = 0;

    printf("=-=-=-=-=- QUAL É O TRIÂNGULO? -=-=-=-=-=\n");
    printf("Digite o primeiro lado do triângulo: ");
    fflush(stdin);
    scanf("%i", &lado1);
    printf("Digite o segundo lado do triângulo: ");
    fflush(stdin);
    scanf("%i", &lado2);
    printf("Digite o terceiro lado do triângulo: ");
    fflush(stdin);
    scanf("%i", &lado3);

    if (lado1 == lado2){
        if(lado2 == lado3 || lado1 == lado3){
            printf("Esse é um triângulo Equilátero.");
        }
        else if (lado2 != lado3 || lado1 != lado3){
            printf("Esse é um triângulo Isósceles.");
        }
    }
    else if (lado2 == lado3){
        if (lado3 == lado1 || lado2 == lado1){
            printf("Esse é um triângulo Equilátero.");
        }
        else if (lado3 != lado1 || lado2 != lado1){
            printf("Esse é um triângulo Isósceles.");
        }
    }
    else if (lado1 == lado3){
       if(lado3 == lado2 || lado1 == lado2){
            printf("Esse é um triângulo Equilátero.");
        }
        else if (lado3 != lado2 || lado1 != lado2){
            printf("Esse é um triângulo Isósceles.");
        }
    }
    else{
        printf("Esse é um triângulo Escaleno.\n\n");
    }
}
