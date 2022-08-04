#include <stdio.h>
#include <locale.h>
#include <windows.h>

/*
Exercício 2
Recorrendo à estrutura do while crie um ciclo para escrever a seguinte sequência de números:

1, 3, 5, 7, 9, 11, 13, 15, 17, 19
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num = 1;
    do{
        printf("%2i\n", num);
        num += 2;
        Sleep(500);
    }while(num <= 19);
}
