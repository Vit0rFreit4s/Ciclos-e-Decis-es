#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*
Exercício 1

Faça um programa que mostre no ecrã os números naturais entre 0 (zero) e 100.
Crie três versões desse programa, cada uma usando uma estrutura de repetição diferente.

*/


void main(){

    setlocale(LC_ALL,"Portuguese");
    int contador = 0;

    printf("Gerando números de 0 à 100 de três formas diferentes!\n");


    while(contador <= 100){
        printf("%i\n", contador);
        contador++;
        Sleep(100);
    }
    system("pause");
    system("cls");
    do{
        printf("%i\n", contador);
        contador++;
        Sleep(100);
    }while(contador <= 100);

    system("pause");
    system("cls");
    for(contador = 0; contador <= 100; contador++){
        printf("%i\n", contador);
        Sleep(100);
    }
}
