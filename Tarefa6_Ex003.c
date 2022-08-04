#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
Programa para calcular a área de um círculo (A = pi . r2).
Desta vez, se o utilizador introduzir um valor negativo para o raio,
o programa volta a pedir um valor para o raio e só depois calcula a área.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float raio = 0;
    const float pi = 3.14159;

    printf("\t\t=-=-=-=-=- CALCULADORA DE ÁREA DE UM CÍRCULO -=-=-=-=-=\n\n");

    printf("Digite o valor do raio: [cm] ");
    fflush(stdin);
    scanf("%f", &raio);

    while(raio <= 0){
        printf("Esse número não é valido, digite novamente o valor do raio: [cm] ");
        fflush(stdin);
        scanf("%f", &raio);
    }
    printf("\nA área do círculo será %.2f cm2", (pi * pow(raio,2)));
}
