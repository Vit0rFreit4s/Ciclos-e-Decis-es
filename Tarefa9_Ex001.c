#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exerc�cio

Crie um programa que gere 3 n�meros aleat�rios no intervalo [1:7].
Caso a sa�da corresponda a 3 setes o programa acumula 100 cr�ditos,
se 2 setes 50 cr�ditos, um sete 25 cr�ditos, 3 iguais diferentes de sete,
15 cr�ditos, nenhuma das anteriores retira 20 cr�ditos. O programa inicia com 100 cr�ditos
e termina quando o n� de cr�ditos for zero ou o utilizador decida interromper, devendo apresentar o n�mero de cr�ditos obtidos.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 0, n2 = 0, n3 = 0, credito = 100;
    char opcao;

    srand(time(NULL));



        do{
            printf("\t\t=-=-=-=-=- SEJA BEM VINDO AO CASSINO DO VITOR -=-=-=-=-=\n\n");
            printf("-------------------------------------------------------------------\n");
            printf("*\t\t\tTABELA DE PONTOS                                              \n");
            printf("*\t3 vezes o '7'\t\t\t\t-->\t100 cr�ditos                         \n");
            printf("*\t2 vezes o '7'\t\t\t\t-->\t 50 cr�ditos                          \n");
            printf("*\t1 vez o '7'\t\t\t\t-->\t 25 cr�ditos                            \n");
            printf("*\t3 vezes algum n�emro diferente de '7'\t-->\t 15 cr�ditos        \n");
            printf("*\tNenhuma das anteriores\t\t\t-->\t-20 cr�ditos                  \n");
            printf("-------------------------------------------------------------------\n");
            printf("\n\tVoc� tem %i cr�ditos. Boa Sorte!!!\n\n", credito);

            n1 = rand()%7+1;
            n2 = rand()%7+1;
            n3 = rand()%7+1;

            Sleep(2000);
            printf("Primeiro sorteados %i\n", n1);
            Sleep(1000);
            printf("Segundo sorteados %i\n", n2);
            Sleep(1000);
            printf("Terceiro sorteados %i\n", n3);
            Sleep(1000);

            if(n1==7 && n2==7 && n3==7){
                credito += 100;
                printf("Voc� ganhou 100 cr�ditos!!!\n");
            }
            else if((n1==7 && n2 ==7) || (n2==7 && n3==7) || (n1==7 && n3==7)){
                credito +=50;
                printf("Voc� ganhou 50 cr�ditos!!!\n");
            }
            else if(n1==7 || n2==7 || n3==7){
                credito += 25;
                printf("Voc� ganhou 25 cr�ditos!!!\n");
            }
            else if(n1==n2 && n2==n3){
                credito += 15;
                printf("Voc� ganhou 15 cr�ditos!!!\n");
            }
            else{
                credito -= 20;
                printf("Voc� perdeu 20 cr�ditos!!!\n");
            }
            if(credito>0){
                printf("\nSeu cr�dito atual � %i.", credito);
                printf("\nDeseja continuar jogando? [S/N] ");
                fflush(stdin);
                opcao = getchar();
                system("cls");
           }else{
                opcao = 'N';
                Sleep(2000);
                system("cls");
           }
        }while(opcao == 's' || opcao == 'S');

        printf("Seu saldo final de cr�ditos � de %i!!!\nPROGRAMA FINALIZADO...\n\n", credito);

}
