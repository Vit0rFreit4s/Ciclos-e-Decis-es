#include <stdio.h>
#include <locale.h>

/*
Crie um programa que v� solicitando ao utilizador n�meros inteiros.
O programa termina quando o n�mero inserido for o n�mero �zero�.
Como sa�da deve apresentar a soma dos n�meros inseridos e quantos n�meros foram inseridos.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int num = 9999, soma = 0, qtd = -1;

    printf("\t\t=-=-=-=-=- SOMANDO N�MEROS -=-=-=-=-=\n\n");
    printf("Digite os n�meros que voc� quer somar e digite \"0\" para parar!\n\n");

    while(num != 0){
        printf("\nDigite um n�mero inteiro: ");
        fflush(stdin);
        scanf("%i", &num);
        soma += num;
        qtd++;

    }
    printf("\nVoc� digitou %i n�meros e a soma dos n�meros digitados ser� %i!!\n\n", qtd, soma);
}
