#include <stdio.h>
#include <locale.h>

/*
Escreva um programa para determinar o tipo de bilhete que cada visitante de um parque de divers�es deve comprar.
O tipo de bilhete � determinado em fun��o da idade, de acordo com a seguinte tabela:

Idade           Bilhete
<6              Isento de Pagamento
Entre 6 e 12    Bilhete de Crian�a
Entre 13 e 65   Bilhete Normal
>65             Bilhete de 3� Idade
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int idade = 0;

    printf("=-=-=-=-=- BILHETERIA -=-=-=-=-=\n");
    printf("Digite a sua idade: ");
    fflush(stdin);
    scanf("%i", &idade);

    printf("\n------------- BILHETES ---------------\n");

    if (idade<6){
        printf("Para essa idade a entrada � isenta.\n");
    }
    else if (idade <= 12){
        printf("Esse � um bilhete de crian�a.\n");
    }
    else if (idade <= 65){
        printf("Esse � um bilhete normal.\n");
    }else{
        printf("Esse � um bilhete para a 3� idade.\n");
    }
}
