#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


/*

Exercício 4

Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero) e 15.
O programa deve gerar os números até que o número 15 seja sorteado.
O programa deve mostrar também, no final, a quantidade de números gerados.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int quantidade = -1, num = 0;
    char numeros[16][9] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "quatorze", "quinze"};
    srand(time(NULL));

    printf("Programa que gera números aleatórios e escreve eles por extenso... Caso ele gere o 15 o pragrama irá parar!!!\n\n");
    do{
        num = rand()%16;
        Sleep(500);
        printf("%s\n", numeros[num]);
        quantidade++;
    }while(num != 15);

    printf("\nO programa gerou %i números.\n", quantidade);


}
