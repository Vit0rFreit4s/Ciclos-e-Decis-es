#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exerc�cio 23

Crie um programa em C que gere um n� entre 0 e 2.
Se 0 escrever �ZERO�, se 1 escreve �UM�, se 2 escrever �DOIS�.
(Utilize a estrutura switch).
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    srand(time(NULL));

    printf("GERANDO N�MEROS ALEAT�RIOS\n");
    num = rand()%3;

    switch(num){
    case 0:
        printf("\nZERO");
        break;
    case 1:
        printf("\nUM");
        break;
    case 2:
        printf("\nDOIS");
        break;
    }

}
