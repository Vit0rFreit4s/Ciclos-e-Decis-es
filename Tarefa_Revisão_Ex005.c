#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exerc�cio 5

Crie um programa em C que gere um n�mero aleat�rio entre 0 e 2.
Se sair 0 escrever �Derrota�, se 1 escreve �Empate�, se 2 �Vit�ria�.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num = 0;
    char resp;
    srand(time(NULL));

    do{
        num = rand()%3;

        switch(num){
        case 0:
            printf("Derrota\n");
            break;
        case 1:
            printf("Empate\n");
            break;
        default:
            printf("Vit�ria\n");

        }

        printf("\nQuer tentar novamente? [S/N] ");
        fflush(stdin);
        resp = getchar();
    }while(resp == 's' || resp == 'S');

}
