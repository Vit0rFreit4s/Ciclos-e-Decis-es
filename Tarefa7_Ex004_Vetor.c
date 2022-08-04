#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


/*

Exerc�cio 4

Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero) e 15.
O programa deve gerar os n�meros at� que o n�mero 15 seja sorteado.
O programa deve mostrar tamb�m, no final, a quantidade de n�meros gerados.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int quantidade = -1, num = 0;
    char numeros[16][9] = {"zero", "um", "dois", "tr�s", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "quatorze", "quinze"};
    srand(time(NULL));

    printf("Programa que gera n�meros aleat�rios e escreve eles por extenso... Caso ele gere o 15 o pragrama ir� parar!!!\n\n");
    do{
        num = rand()%16;
        Sleep(500);
        printf("%s\n", numeros[num]);
        quantidade++;
    }while(num != 15);

    printf("\nO programa gerou %i n�meros.\n", quantidade);


}
