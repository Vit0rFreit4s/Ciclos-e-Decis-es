#include <stdio.h>
#include <locale.h>

/*
Leia um inteiro entre 0 e 50 e verifique em que dezena esse número pertence.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int n = 0;

    printf("=-=-=-=-=- DESCOBRINDO DEZENAS -=-=-=-=-=\n");
    printf("Digite um número entre 0 e 50: ");
    fflush(stdin);
    scanf("%i", &n);

    if (n <= 10){
        printf("Esse número pertence a 1ª dezena.\n");
    }else if (n <= 20){
        printf("Esse número pertence a 2ª dezena.\n");
    }else if (n <= 30){
        printf("Esse número pertence a 3ª dezena.\n");
    }else if (n <= 40){
        printf("Esse número pertence a 4ª dezena.\n");
    }else{
        printf("Esse número pertence a 5ª dezena.\n");
    }
}
