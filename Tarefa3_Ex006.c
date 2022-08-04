#include <stdio.h>
#include <locale.h>

/*
Escreva um programa que, dada a idade de um nadador, classifique-o numa das categorias especificadas na tabela:

Categoria           Idade
Infantil A          5 a 7 anos
Infantil B          8 a 10 anos
Infanto-juvenil     11 a 13 anos
Juvenil             14 a 17 anos
Sénior              maiores de 18 anos
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;

    printf("=-=-=-=-=- CAMPEONATO DE NATAÇÃO -=-=-=-=-=\n\n");
    printf("Opção\tCategoria\t\t\tIdade\n");
    printf("1\tInfantil A\t\t\t5 a 7 anos\n");
    printf("2\tInfantil B\t\t\t8 a 10 anos\n");
    printf("3\tInfanto-juvenil\t\t\t11 a 13 anos\n");
    printf("4\tJuvenil\t\t\t\t14 a 17 anos\n");
    printf("5\tSénior\t\t\t\tMaiores de 18 anos\n");

    printf("\nEscolha a opção: ");
    fflush(stdin);
    scanf("%i", &opcao);

    switch(opcao){
        case 1:
            printf("Para essa idade o competidor entrará na categoria Infantil A!");
            break;
        case 2:
            printf("Para essa idade o competidor entrará na categoria Infantil B!");
            break;
        case 3:
            printf("Para essa idade o competidor entrará na categoria Infanto-Juvenil!");
            break;
        case 4:
            printf("Para essa idade o competidor entrará na categoria Juvenil!");
            break;
        case 5:
            printf("Para essa idade o competidor entrará na categoria Senior!");
            break;
        default:
            printf("Entrada incorreta, tente novamente!");
            break;
    }

}
