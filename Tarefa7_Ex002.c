#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Exerc�cio 2

Fa�a um programa que solicite ao utilizador um valor positivo.
O programa dever� repetir a solicita��o caso o utilizador forne�a um valor inv�lido (negativo).
Quando o utilizador fornecer um valor v�lido, mostre uma mensagem de texto confirmando o valor digitado.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int valor = 0;

    do{
        printf("Digite um n�mero positivo: ");
        fflush(stdin);
        scanf("%i", &valor);
    }while(valor < 0);
    printf("\nValor digitado corretamente!\nVoc� digitou %i.\n\n",valor);
}
