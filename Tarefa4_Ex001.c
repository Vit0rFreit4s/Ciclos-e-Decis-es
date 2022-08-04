#include <stdio.h>
#include <locale.h>

/*
Pretende-se desenvolver, em C, um programa que calcule a hora e o minuto de chegada de um determinado voo.
É solicitado ao utilizador a hora de partida, minuto de partida, hora da duração, minuto da duração e apresente a hora e minuto de chegada.
As horas de partida e duração devem ser validadas e os valores situam-se entre 0 e 23,
enquanto que os minutos de partida e duração estão compreendidos entre 0 e 59. O programa deve ainda
informar se o voo chega no próprio dia ou no dia seguinte.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int hora_chegada = 0, min_chegada = 0, hora_partida = 0, min_partida = 0, hora_duracao = 0, min_duracao = 0;

    printf("\t\t 00  000 000   00  000   00  000  00000  00\n");
    printf("\t\t0  0 0   0  0 0  0 0  0 0  0 0  0   0   0  0\n");
    printf("\t\t0000 000 000  0  0 000  0  0 000    0   0  0\n");
    printf("\t\t0  0 0   0  0 0  0 0    0  0 0  0   0   0  0\n");
    printf("\t\t0  0 000 0  0  00  0     00  0  0   0    00\n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");

    printf("Digite a hora de partida do voo: [0-23] ");
    fflush(stdin);
    scanf("%i", &hora_partida);
    printf("\nDigite o minuto de partida do voo: [0-59] ");
    fflush(stdin);
    scanf("%i", &min_partida);
    printf("\nDigite a hora de duração do voo: [0-23] ");
    fflush(stdin);
    scanf("%i", &hora_duracao);
    printf("\nDigite o minuto de duração do voo: [0-59] ");
    fflush(stdin);
    scanf("%i", &min_duracao);

    printf("--------------------------------------------------------------------------------------------------------------------\n");

    hora_chegada = hora_partida + hora_duracao;
    min_chegada = min_partida + min_duracao;

        if((hora_partida >= 0 && hora_partida <= 23) && (min_partida >= 0 && min_partida <= 59) && (hora_duracao >= 0 && hora_duracao <= 23) && (min_duracao >= 0 && min_duracao <= 59)){
            if (hora_chegada <= 23 && min_chegada <=59){
                printf("\t\t\tPARTIDA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_partida, min_partida);
                printf("\t\t\tDURAÇÃO DO VOO\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_duracao, min_duracao);
                printf("\t\t\tCHEGADA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_chegada, min_chegada);
            }else if(hora_chegada > 23 && min_chegada > 59){
                printf("\n\t\t\tEsse voo chegará no dia seguinte!!!\n\n");
                printf("\t\t\tPARTIDA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_partida, min_partida);
                printf("\t\t\tDURAÇÃO DO VOO\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_duracao, min_duracao);
                printf("\t\t\tCHEGADA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", (hora_chegada-23), (min_chegada-60));
            }else if(hora_chegada > 23 && min_chegada <= 59){
                printf("\n\t\t\tEsse voo chegará no dia seguinte!!!\n\n");
                printf("\t\t\tPARTIDA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_partida, min_partida);
                printf("\t\t\tDURAÇÃO DO VOO\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_duracao, min_duracao);
                printf("\t\t\tCHEGADA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", (hora_chegada-24), min_chegada);
            }else if(hora_chegada <= 23 && min_chegada > 59){
                printf("\t\t\tPARTIDA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_partida, min_partida);
                printf("\t\t\tDURAÇÃO DO VOO\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", hora_duracao, min_duracao);
                printf("\t\t\tCHEGADA\n");
                printf("\t\t\tHora: %i\t\tMinuto: %i\n\n", (hora_chegada+1), (min_chegada-60));
            }
        }else{
            printf("Dados inválidos! Repita a operação...\n\n");
        }
}
