#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa para verificar se um determinado n�mero, fornecido pelo utilizador,
� divis�vel por 3 ou por 5 mas n�o por ambos.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n = 0;

    printf("=-=-=-=-=- VERIFICANDO N�MEROS -=-=-=-=-=\n");
    printf("Digite um valor: ");
    fflush(stdin);
    scanf("%i", &n);

    if (n%3==0 && n%5!=0 ){
        printf("Esse n�mero � divis�vel por 3 e n�o divis�vel por 5!");
    }else if (n%3!=0 && n%5==0){
        printf("Esse n�mero � divis�vel por 5 e n�o divis�vel por 3!");
    }else{
        printf("Esse n�mero n�o � divis�vel apenas por 3 ou apenas por 5!");
    }
}
