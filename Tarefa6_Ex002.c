#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


/*
Crie um programa que escreva no ecrã os números de 1 a 100 e
os respetivos quadrados. O resultado do programa deve ser:

Saída:
1 1
2 4
3 9
4 16
5 …
...
100 10000

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float cont = 1;

    printf("\t\t=-=-=-=-=-CONTANDO DE 1 A 100 E MOSTRANDO O QUADRADO DE CADA NÚMERO -=-=-=-=-=\n\n");

    while(cont <= 100){
        printf("%.0f %.0f\n", cont, pow(cont,2)); // pow é a função da exponenciação mas tem que usar float!
        cont++;
    }

}
