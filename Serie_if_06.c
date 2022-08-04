#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba a altura e o género de uma pessoa, calcule e mostre o seu peso
ideal. Considere que o peso ideal para homens é calculado pela fórmula 58 - 7h e o peso ideal para
mulheres é calculado pela fórmula 44 ,7 - 1h, onde h é a altura fornecida.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float altura = 0, peso = 0;
    char genero;

    printf("=-=-=-=-=- CALCULADORA DE PESO -=-=-=-=-=\n");
    printf("\nDigite sua altura: [m] ");
    fflush(stdin);
    scanf("%f", &altura);
    printf("\nDigite seu gênero: [M/F] ");
    fflush(stdin);
    genero = getchar();

    system("clear || cls");

    switch(genero){
        case 'm':
        case 'M':
            printf("O seu peso ideal é %.2f\n\n", (22 * (altura*altura)));
            break;
        case 'f':
        case 'F':
            printf("O seu peso ideal é %.2f\n\n", (21 * (altura * altura)));
            break;
        default:
            printf("Entrada incorreta, tente novamente!");
    }

}
