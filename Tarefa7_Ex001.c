#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*
Exerc�cio 1

Fa�a um programa que mostre no ecr� os n�meros naturais entre 0 (zero) e 100.
Crie tr�s vers�es desse programa, cada uma usando uma estrutura de repeti��o diferente.

*/


void main(){

    setlocale(LC_ALL,"Portuguese");
    int contador = 0;

    printf("Gerando n�meros de 0 � 100 de tr�s formas diferentes!\n");


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
