#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Exercício 5

Faça um programa que permita ao utilizador fornecer diversos valores positivos.
O programa deverá parar de solicitar valores quando o utilizador fornecer um valor negativo.
No final, o programa deverá informar a soma dos valores lidos.

Obs.: o valor negativo
(último valor entrado) não deve entrar na conta da soma.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num = 0, contador = 1, soma = 0;

    printf("Programa para somar valores, para sair basta digitar um número negativo!\n\n");

    do{
        printf("Digite o %iº número: ", contador);
        fflush(stdin);
        scanf("%i", &num);
        soma += num;
        contador++;
    }while(num >= 0);
    printf("\nA soma dos valores é %i.\n\n", soma-num);
}
