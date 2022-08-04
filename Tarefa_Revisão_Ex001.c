#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*
Exercício 1
Recorrendo à estrutura while crie um ciclo para escrever a seguinte sequência de números:

2, 4, 6, 8, 10, 12, 14, 16, 18, 20
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num = 2;

    while(num <= 20){
        printf("%2i\n", num);
        num += 2;
        Sleep(500);
    }
}
