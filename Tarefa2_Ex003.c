#include <stdio.h>
#include <locale.h>

/*
Criar um programa para receber 3 valores inteiros correspondendo ao lados de tri�ngulo e informar se o tri�ngulo � equil�tero, is�sceles ou escaleno.

Equil�tero          Lados todos iguais
Is�sceles           Dois iguais
Escaleno            Todos diferentes
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int lado1 = 0, lado2 = 0, lado3 = 0;

    printf("=-=-=-=-=- QUAL � O TRI�NGULO? -=-=-=-=-=\n");
    printf("Digite o primeiro lado do tri�ngulo: ");
    fflush(stdin);
    scanf("%i", &lado1);
    printf("Digite o segundo lado do tri�ngulo: ");
    fflush(stdin);
    scanf("%i", &lado2);
    printf("Digite o terceiro lado do tri�ngulo: ");
    fflush(stdin);
    scanf("%i", &lado3);

    if (lado1 == lado2){
        if(lado2 == lado3 || lado1 == lado3){
            printf("Esse � um tri�ngulo Equil�tero.");
        }
        else if (lado2 != lado3 || lado1 != lado3){
            printf("Esse � um tri�ngulo Is�sceles.");
        }
    }
    else if (lado2 == lado3){
        if (lado3 == lado1 || lado2 == lado1){
            printf("Esse � um tri�ngulo Equil�tero.");
        }
        else if (lado3 != lado1 || lado2 != lado1){
            printf("Esse � um tri�ngulo Is�sceles.");
        }
    }
    else if (lado1 == lado3){
       if(lado3 == lado2 || lado1 == lado2){
            printf("Esse � um tri�ngulo Equil�tero.");
        }
        else if (lado3 != lado2 || lado1 != lado2){
            printf("Esse � um tri�ngulo Is�sceles.");
        }
    }
    else{
        printf("Esse � um tri�ngulo Escaleno.\n\n");
    }
}
