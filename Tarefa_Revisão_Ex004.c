#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exerc�cio 4

Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero) e 5.
O programa deve gerar os n�meros at� que o n�mero 3 seja sorteado.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    char letras [6][8] = {"zero", "um", "dois", "tr�s", "quatro", "cinco"};
    int num = 0;
    srand(time(NULL));

    do{
        num = rand()%6;
        printf("%s\n", letras[num]);
        Sleep(500);
    }while(num != 3);
}
