#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


/*
Crie um programa que escreva no ecr� os n�meros de 1 a 100 e
os respetivos quadrados. O resultado do programa deve ser:

Sa�da:
1 1
2 4
3 9
4 16
5 �
...
100 10000

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float cont = 1;

    printf("\t\t=-=-=-=-=-CONTANDO DE 1 A 100 E MOSTRANDO O QUADRADO DE CADA N�MERO -=-=-=-=-=\n\n");

    while(cont <= 100){
        printf("%.0f %.0f\n", cont, pow(cont,2)); // pow � a fun��o da exponencia��o mas tem que usar float!
        cont++;
    }

}
