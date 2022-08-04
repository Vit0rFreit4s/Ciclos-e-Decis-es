#include <stdio.h>
#include <locale.h>

/*
Crie um algoritmo que mostre se um dado ano é bissexto ou comum.

Nota: Um ano é bissexto quando é divisível por 4 e por 100 ou divisível por 400.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("=-=-=-=-=- PROGRAMA ANO BISSEXTO -=-=-=-=-=\n");
    printf("Digite um ano qualquer: ");
    fflush(stdin);
    scanf("%i", &ano);

    if(ano%4==0 && ano%100==0 || ano%400==0){
        printf("O ano %i é BISSEXTO.\n", ano);
    }else{
        printf("O ano %i não é BISSEXTO.", ano);
    }
}
