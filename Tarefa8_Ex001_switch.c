#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

/*
Exerc�cio 1

Crie um programa que gere um n�mero aleat�rio no intervalo [0;200] e solicite ao utilizador para adivinhar o n�mero.
Caso o utilizador acerte, imprima uma mensagem dando os parab�ns e termina o programa.
Caso o valor que o utilizador indique esteja incorreto, o programa dever� mostrar uma das seguintes mensagens:

� Quase a arder! (caso o valor correto esteja a 5 unidades ou menos do valor fornecido pelo utilizador).
� Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
� Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
� Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
� Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
� Gelado (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
� Congelado! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).

->Deve dar oportunidade de repetir o programa.
*/

void main()
{
    setlocale(LC_ALL,"Portuguese");

    int aleatorio, num, i = 1, diferenca = 0;
    char opcao;

    srand(time(NULL));



    do
    {
        system("cls");
        printf("\t\t=-=-=-=-=-=-=-=-=- ADVINHE O N�MERO SORTEADO -=-=-=-=-=-=-=-=-=-=\n\n");
        printf("O programa ir� gerar um n�mero aleat�rio entre 0 e 200 e voc� dever� acert�-lo. Caso erre, dicas aparecer�o!\n\n");
        aleatorio = rand()%201;


        do
        {
            do{
                printf("\nDigite a %i� tentativa: ", i);
                fflush(stdin);
                scanf("%i", &num);
            }while(num<0 || num>200);

            diferenca = abs(aleatorio-num);// fun��o para n�mero absoluto

            switch(diferenca){

            case 1 ... 5:
                printf("Quase a arder!!\n");
                break;
            case 6 ... 10:
                printf("Muito quente!!\n");
                break;
            case 11 ... 20:
                printf("Quente!!\n");
                break;
            case 21 ... 30:
                printf("Frio!!\n");
                break;
            case 31 ... 50:
                printf("Muito frio!!\n");
                break;
            case 51 ... 75:
                printf("Gelado!!\n");
                break;
            case 76 ... 200:
                printf("Congelado!!\n");
                break;
            default:
                printf("\nPARAB�NS, Voc� encontrou o n�mero sorteado que era %i!!!", aleatorio);
            }

            i++;

        }
        while(num != aleatorio);

        printf("\n\nDeseja tentar novamente? [S/N] ");
        fflush(stdin);
        opcao = getchar();
        i = 1;
    }
    while(opcao == 'S' || opcao == 's');
    system("cls");
    printf("\nPrograma finalizado!!\n\n");
    Sleep(2000);
}
