#include <stdio.h>
#include <locale.h>

/*
Elabore um programa que apresente o maior e menor de 5 números lidos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int maior = 0, menor = 0, n = 0, cont = 1;

    printf("\t\t=-=-=-=-=- MAIOR E MENOR NÚMERO -=-=-=-=-=\n\n");

    while(cont <= 5){
        printf("Digite o %iº número: ", cont);
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
    printf("\nO maior número apresentado é %i e o menor número apresentado é %i.\n\n", maior, menor);
}
