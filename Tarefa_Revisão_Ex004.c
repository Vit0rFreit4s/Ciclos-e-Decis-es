#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exercício 4

Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero) e 5.
O programa deve gerar os números até que o número 3 seja sorteado.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    char letras [6][8] = {"zero", "um", "dois", "três", "quatro", "cinco"};
    int num = 0;
    srand(time(NULL));

    do{
        num = rand()%6;
        printf("%s\n", letras[num]);
        Sleep(500);
    }while(num != 3);
}
