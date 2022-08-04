#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Exerc�cio 5

Fa�a um programa que permita ao utilizador fornecer diversos valores positivos.
O programa dever� parar de solicitar valores quando o utilizador fornecer um valor negativo.
No final, o programa dever� informar a soma dos valores lidos.

Obs.: o valor negativo
(�ltimo valor entrado) n�o deve entrar na conta da soma.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num = 0, contador = 1, soma = 0;

    printf("Programa para somar valores, para sair basta digitar um n�mero negativo!\n\n");

    do{
        printf("Digite o %i� n�mero: ", contador);
        fflush(stdin);
        scanf("%i", &num);
        soma += num;
        contador++;
    }while(num >= 0);
    printf("\nA soma dos valores � %i.\n\n", soma-num);
}
