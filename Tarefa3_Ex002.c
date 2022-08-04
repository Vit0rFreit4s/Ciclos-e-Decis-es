#include <stdio.h>
#include <locale.h>

/*
Faça um programa para verificar se um determinado número, fornecido pelo utilizador,
é divisível por 3 ou por 5 mas não por ambos.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n = 0;

    printf("=-=-=-=-=- VERIFICANDO NÚMEROS -=-=-=-=-=\n");
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i", &n);

    if (n%3==0 && n%5!=0 ){
        printf("Esse número é divisível por 3 e não divisível por 5!");
    }else if (n%3!=0 && n%5==0){
        printf("Esse número é divisível por 5 e não divisível por 3!");
    }else{
        printf("Esse número não é divisível apenas por 3 ou apenas por 5!");
    }
}
