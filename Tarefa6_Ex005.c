#include <stdio.h>
#include <locale.h>

/*
Elabore um programa que apresente o maior e menor de 5 n�meros lidos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int maior = 0, menor = 0, n = 0, cont = 1;

    printf("\t\t=-=-=-=-=- MAIOR E MENOR N�MERO -=-=-=-=-=\n\n");

    while(cont <= 5){
        printf("Digite o %i� n�mero: ", cont);
        fflush(stdin);
        scanf("%i", &n);

        if(cont == 1){
            maior = n;
            menor = n;
        }
        else if ( n >= maior){
            maior = n;
        }
        else if (n <= menor){
            menor = n;
        }
        cont++;
    }
    printf("\nO maior n�mero apresentado � %i e o menor n�mero apresentado � %i.\n\n", maior, menor);
}
