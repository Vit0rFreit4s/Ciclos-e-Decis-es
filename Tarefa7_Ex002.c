#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Exercício 2

Faça um programa que solicite ao utilizador um valor positivo.
O programa deverá repetir a solicitação caso o utilizador forneça um valor inválido (negativo).
Quando o utilizador fornecer um valor válido, mostre uma mensagem de texto confirmando o valor digitado.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int valor = 0;

    do{
        printf("Digite um número positivo: ");
        fflush(stdin);
        scanf("%i", &valor);
    }while(valor < 0);
    printf("\nValor digitado corretamente!\nVocê digitou %i.\n\n",valor);
}
