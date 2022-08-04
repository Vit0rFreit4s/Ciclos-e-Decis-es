#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exercício 3

Crie um programa em C que gere um número aleatório entre 0 e 1.
Se sair 0 escrever “Cara”, se 1 escreve “Coroa”.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num = 0;
    char resp;
    srand(time(NULL));

    do{

        num = rand()%2;
        if(num == 0){
            printf("\nCara\n");
        }else{
            printf("\nCoroa\n");
        }
        printf("\nQuer tentar novamente? [S/N] ");
        fflush(stdin);
        resp = getchar();
    }while(resp == 's' || resp == 'S');

}
