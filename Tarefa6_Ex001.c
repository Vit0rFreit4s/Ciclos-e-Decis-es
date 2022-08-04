#include <stdio.h>
#include <locale.h>

/*
Crie um programa que vá solicitando ao utilizador números inteiros.
O programa termina quando o número inserido for o número “zero”.
Como saída deve apresentar a soma dos números inseridos e quantos números foram inseridos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num = 9999, soma = 0, qtd = -1;

    printf("\t\t=-=-=-=-=- SOMANDO NÚMEROS -=-=-=-=-=\n\n");
    printf("Digite os números que você quer somar e digite \"0\" para parar!\n\n");

    while(num != 0){
        printf("\nDigite um número inteiro: ");
        fflush(stdin);
        scanf("%i", &num);
        soma += num;
        qtd++;

    }
    printf("\nVocê digitou %i números e a soma dos números digitados será %i!!\n\n", qtd, soma);
}
