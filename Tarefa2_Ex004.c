#include <stdio.h>
#include <locale.h>

/*
Elaborar um programa que recebe 3 valores inteiros. Mostra o maior, o menor e a média.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 0, n2 = 0, n3 = 0;
    float media = 0;

    printf("=-=-=-=-=- MAIOR, MENOR E MÉDIA -=-=-=-=-=\n");
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("Digite o terceiro valor: ");
    fflush(stdin);
    scanf("%i", &n3);

    media = (n1 + n2+ n3)/3;

    if (n1 == n2 || n1 == n3 || n2 == n3){
        printf("Existe pelo menos 2 números iguais! Repita a operação.\n");
    }else if(n1>n2){
        if(n2>n3){
            printf("\nMaior: %i", n1);
            printf("\nMenor: %i", n3);
            printf("\nMédia: %.2f", media);
       }else if(n3>n1){
            printf("\nMaior: %i", n3);
            printf("\nMenor: %i", n2);
            printf("\nMédia: %.2f", media);
        }else if(n3>n2){
            printf("\nMaior: %i", n1);
            printf("\nMenor: %i", n2);
            printf("\nMédia: %.2f", media);
        }
    }else if(n2>n3){
        if(n3>n1){
            printf("\nMaior: %i", n2);
            printf("\nMenor: %i", n1);
            printf("\nMédia: %.2f", media);
        }else if(n1>n3){
            printf("\nMaior: %i", n2);
            printf("\nMenor: %i", n3);
            printf("\nMédia: %.2f", media);
        }
    }else{
        printf("\nMaior: %i", n3);
        printf("\nMenor: %i", n1);
        printf("\nMédia: %.2f", media);
    }
}
