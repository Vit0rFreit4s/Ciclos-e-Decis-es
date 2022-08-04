#include <stdio.h>
#include <locale.h>

/*
Leia uma dist�ncia em quil�metros e a quantidade de litros de gasolina consumidos por um carro num percurso,
calcule o consumo em km/l e escreva uma mensagem de acordo a tabela em baixo:

Consumo (Km/l) Mensagem
Menor que 8 Venda o carro!
Entre 8 e 14 Econ�mico
Maior que 14 Super econ�mico
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int km = 0, l = 0;
    float consumo = 0;

    printf("=-=-=-=-=- ECONOMIA DE UM CARRO -=-=-=-=-=\n");
    printf("Digite a distancia em km que seu carro faz: ");
    fflush(stdin);
    scanf("%i", &km);
    printf("Digite com quantos litros voc� faz essa dist�ncia: ");
    fflush(stdin);
    scanf("%i", &l);

    consumo = (float)km/l;

    if (consumo < 8){
        printf("Seu carro faz %.2f Km/l, Venda o carro!", consumo);
    }else if ( consumo <= 14){
        printf("Seu carro faz %.2f Km/l, Carro econ�mico!", consumo);
    }else{
        printf("Seu carro faz %.2f Km/l, Carro super econ�mico!", consumo);
    }
}
