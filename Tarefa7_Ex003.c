#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*
Exerc�cio 3

Eis um exemplo para gerar um n�mero aleat�rio entre 0 e 15:

#include <stdio.h>
#include <stdlib.h>

main () {
srand(time(NULL));
int a=(rand()%15);
printf("%i",a);
}

Fa�a um programa que gere e mostre n�meros aleat�rios entre 0 (zero) e 15.
O programa deve gerar n�meros at� que o n�mero 0 (zero) seja sorteado.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num;
    srand(time(NULL));

    printf("Programa para gerar n�meros aleat�rios! Caso gere um zero o programa ir� parar...\n\n");

    do{
        num = rand()%16;
        printf("O n�mero gerado foi %2i\n", num);
        Sleep(1000);
    }while(num != 0);
    printf("\nPrograma finalizado!!!\n\n");
}








