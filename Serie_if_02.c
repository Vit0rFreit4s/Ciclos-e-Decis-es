#include <stdio.h>
#include <locale.h>

/*
Leia um inteiro entre 0 e 50 e verifique em que dezena esse n�mero pertence.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n = 0;

    printf("=-=-=-=-=- DESCOBRINDO DEZENAS -=-=-=-=-=\n");
    printf("Digite um n�mero entre 0 e 50: ");
    fflush(stdin);
    scanf("%i", &n);

    if (n <= 10){
        printf("Esse n�mero pertence a 1� dezena.\n");
    }else if (n <= 20){
        printf("Esse n�mero pertence a 2� dezena.\n");
    }else if (n <= 30){
        printf("Esse n�mero pertence a 3� dezena.\n");
    }else if (n <= 40){
        printf("Esse n�mero pertence a 4� dezena.\n");
    }else{
        printf("Esse n�mero pertence a 5� dezena.\n");
    }
}
