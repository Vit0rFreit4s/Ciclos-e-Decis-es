#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que receba a altura e o g�nero de uma pessoa, calcule e mostre o seu peso
ideal. Considere que o peso ideal para homens � calculado pela f�rmula 58 - 7h e o peso ideal para
mulheres � calculado pela f�rmula 44 ,7 - 1h, onde h � a altura fornecida.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float altura = 0, peso = 0;
    char genero;

    printf("=-=-=-=-=- CALCULADORA DE PESO -=-=-=-=-=\n");
    printf("\nDigite sua altura: [m] ");
    fflush(stdin);
    scanf("%f", &altura);
    printf("\nDigite seu g�nero: [M/F] ");
    fflush(stdin);
    genero = getchar();

    system("clear || cls");

    switch(genero){
        case 'm':
        case 'M':
            printf("O seu peso ideal � %.2f\n\n", (22 * (altura*altura)));
            break;
        case 'f':
        case 'F':
            printf("O seu peso ideal � %.2f\n\n", (21 * (altura * altura)));
            break;
        default:
            printf("Entrada incorreta, tente novamente!");
    }

}
