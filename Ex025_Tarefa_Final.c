#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exercício 25

Recorrendo à estrutura while, crie um programa que solicite ao utilizador um número inteiro e
apresente a tabuada da multiplicação desse número no seguinte formato:

Exemplo:
7 x 1 = 7
7 x 2 = 14
….
7 x 10 = 70
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i = 1;

    printf("\tTABUADA\n\n");
    printf("Digite o número que quer saber a tabuada: ");
    scanf("%i", &num);

    while(i <= 10){
        printf("%i x %i = %i\n", num, i, num*i);
        i++;
    }
}
