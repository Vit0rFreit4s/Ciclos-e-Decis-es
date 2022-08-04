#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exercício

Crie um programa que gere 3 números aleatórios no intervalo [1:7].
Caso a saída corresponda a 3 setes o programa acumula 100 créditos,
se 2 setes 50 créditos, um sete 25 créditos, 3 iguais diferentes de sete,
15 créditos, nenhuma das anteriores retira 20 créditos. O programa inicia com 100 créditos
e termina quando o nº de créditos for zero ou o utilizador decida interromper, devendo apresentar o número de créditos obtidos.
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
            printf("*\t3 vezes o '7'\t\t\t\t-->\t100 créditos                         \n");
            printf("*\t2 vezes o '7'\t\t\t\t-->\t 50 créditos                          \n");
            printf("*\t1 vez o '7'\t\t\t\t-->\t 25 créditos                            \n");
            printf("*\t3 vezes algum núemro diferente de '7'\t-->\t 15 créditos        \n");
            printf("*\tNenhuma das anteriores\t\t\t-->\t-20 créditos                  \n");
            printf("-------------------------------------------------------------------\n");
            printf("\n\tVocê tem %i créditos. Boa Sorte!!!\n\n", credito);

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
                printf("Você ganhou 100 créditos!!!\n");
            }
            else if((n1==7 && n2 ==7) || (n2==7 && n3==7) || (n1==7 && n3==7)){
                credito +=50;
                printf("Você ganhou 50 créditos!!!\n");
            }
            else if(n1==7 || n2==7 || n3==7){
                credito += 25;
                printf("Você ganhou 25 créditos!!!\n");
            }
            else if(n1==n2 && n2==n3){
                credito += 15;
                printf("Você ganhou 15 créditos!!!\n");
            }
            else{
                credito -= 20;
                printf("Você perdeu 20 créditos!!!\n");
            }
            if(credito>0){
                printf("\nSeu crédito atual é %i.", credito);
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

        printf("Seu saldo final de créditos é de %i!!!\nPROGRAMA FINALIZADO...\n\n", credito);

}
