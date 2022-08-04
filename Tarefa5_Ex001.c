#include <stdio.h>
#include <locale.h>

/*
Escreva um programa em C para uma empresa de aluguer de autom�veis, que imprima o
montante devido por cada cliente. O montante devido depende dos quil�metros efetuados,
do n�mero de dias que durou o aluguer e do tipo de carro alugado. Os Volkswagen custam
30� por dia e 1,20� por quil�metro. Os Toyota custam 35� por dia e 1,50� por quil�metro.
Os Mercedes custam 60� por dia e 2,50� por quil�metro. Os primeiros 75 quil�metros s�o
gratuitos, independentemente do tipo de carro alugado.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int km = 0, dias = 0;
    char carro;


    printf("\t\t=-=-=-=-=- ALUGUE SEU CARRO AQUI -=-=-=-=-=\n\n");
    printf("\t\tTABELA DE CARROS\n\n");
    printf("\tCARROS\t\tPRE�O\n");
    printf("\tVolkswagen\t30 euros por dia + 1,20 euros por Km.\n");
    printf("\tToyota\t\t35 euros por dia + 1,50 euros por Km.\n");
    printf("\tMerecedes\t60 euros por dia + 2,50 euros por Km.\n");
    printf("\n\tOS PRIMEIRO 75Km S�O GRATUITOS!!!!!!\n");

    printf("\n\nDigite a primeira letra da marca do carro que alugou: ");
    fflush(stdin);
    carro = getchar();
    printf("Digite quantos dias ficou com o carro: ");
    fflush(stdin);
    scanf("%i", &dias);
    printf("Digite quantos Kms percorreu: ");
    fflush(stdin);
    scanf("%i", &km);

    if(dias > 0 && km > 0){
        if (km > 75){
            switch(carro){
                case 'V':
                case 'v':
                    printf("\nVoc� alugou um Volkswagen por %i dias e percorreu %i kms, assim ter� que pagar %.2f euros.\n", dias, km, ((30 * dias) + (1.2 * (km-75))));
                    break;
                case 'T':
                case 't':
                    printf("\nVoc� alugou um Toyota por %i dias e percorreu %i kms, assim ter� que pagar %.2f euros.\n", dias, km, ((35 * dias) + (1.5 * (km-75))));
                    break;
                case 'M':
                case 'm':
                    printf("\nVoc� alugou uma Mercedes por %i dias e percorreu %i kms, assim ter� que pagar %.2f euros.\n", dias, km, ((60 * dias ) + (2.5 * (km-75))));
                    break;
                default:
                    printf("\nEntrada inv�lida! Tente novamente...\n\n");
            }
        }else{
            switch(carro){
                case 'V':
                case 'v':
                    printf("\nVoc� alugou um Volkswagen por %i dias e percorreu %i kms, assim ter� que pagar %.2f euros.\n", dias, km, (30 * dias) + (1.2 * km));
                    break;
                case 'T':
                case 't':
                    printf("\nVoc� alugou um Toyota por %i dias e percorreu %i kms, assim ter� que pagar %.2f euros.\n", dias, km, (35 * dias) + (1.5 * km));
                    break;
                case 'M':
                case 'm':
                    printf("\nVoc� alugou uma Mercedes por %i dias e percorreu %i kms, assim ter� que pagar %.2f euros.\n", dias, km, (60 * dias) + (2.5 * km));
                    break;
                default:
                    printf("\nEntrada inv�lida! Tente novamente...\n\n");
        }
        }
    }else{
        printf("\nEntrada inv�lida! Tente novamente...\n\n");
    }
}
