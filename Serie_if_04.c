#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que leia duas datas, ambas no formato dd/mm/aaaa, e verifique e mostre qual das datas � a mais recente.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int dia1 = 0, mes1 = 0, ano1 = 0, dia2 = 0, mes2 = 0, ano2 = 0;

    printf("=-=-=-=-=- COMPARANDO DATAS -=-=-=-=-=\n");
    printf("Digite o dia, m�s e ano da primeira data: [dd/mm/aaaa] ");
    fflush(stdin);
    scanf("%i %i %i", &dia1, &mes1, &ano1);
    printf("Digite o dia, m�s e ano da segunda data: [dd/mm/aaaa] ");
    fflush(stdin);
    scanf("%i %i %i", &dia2, &mes2, &ano2);

    if (ano1 > ano2){
        printf("A primeira data � mais recente.");
    }else if (ano1 < ano2){
        printf("A segunda data � a mais recente.");
    }else if (ano1 == ano2){
        if (mes1 < mes2){
            printf("A primeira data � mais recente.");
        }else if (mes1 > mes2){
            printf("A segunda data � a mais recente.");
        }else if (mes1 == mes2){
            if (dia1 < dia2){
                printf("A primeira data � mais recente.");
            }else if (dia1 > dia2){
                printf("A segunda data � a mais recente.");
            }else{
                printf("As duas datas s�o iguais.");
            }
        }
    }


}
