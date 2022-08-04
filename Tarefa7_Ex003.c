#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*
Exercício 3

Eis um exemplo para gerar um número aleatório entre 0 e 15:

#include <stdio.h>
#include <stdlib.h>

main () {
srand(time(NULL));
int a=(rand()%15);
printf("%i",a);
}

Faça um programa que gere e mostre números aleatórios entre 0 (zero) e 15.
O programa deve gerar números até que o número 0 (zero) seja sorteado.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;
    srand(time(NULL));

    printf("Programa para gerar números aleatórios! Caso gere um zero o programa irá parar...\n\n");

    do{
        num = rand()%16;
        printf("O número gerado foi %2i\n", num);
        Sleep(1000);
    }while(num != 0);
    printf("\nPrograma finalizado!!!\n\n");
}








