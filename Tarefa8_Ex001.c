#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

/*
Exercício 1

Crie um programa que gere um número aleatório no intervalo [0;200] e solicite ao utilizador para adivinhar o número.
Caso o utilizador acerte, imprima uma mensagem dando os parabéns e termina o programa.
Caso o valor que o utilizador indique esteja incorreto, o programa deverá mostrar uma das seguintes mensagens:

• Quase a arder! (caso o valor correto esteja a 5 unidades ou menos do valor fornecido pelo utilizador).
• Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
• Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
• Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
• Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
• Gelado (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
• Congelado! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).

->Deve dar oportunidade de repetir o programa.
*/

void main()
{
    setlocale(LC_ALL,"Portuguese");

    int aleatorio, num, i = 1;
    char opcao;

    srand(time(NULL));



    do
    {
        system("cls");
        printf("\t\t=-=-=-=-=-=-=-=-=- ADVINHE O NÚMERO SORTEADO -=-=-=-=-=-=-=-=-=-=\n\n");
        printf("O programa irá gerar um número aleatório entre 0 e 200 e você deverá acertá-lo. Caso erre, dicas aparecerão!\n\n");
        aleatorio = rand()%201;

        do
        {
            printf("\nDigite a %iª tentativa: ", i);
            fflush(stdin);
            scanf("%i", &num);

            if(num != aleatorio)
            {
                if((num >= aleatorio-5 || num >= aleatorio+5) && (num <= aleatorio- 5 || num <= aleatorio+5))
                {
                    printf("Quase a arder!!\n");
                }
                else if((num >= aleatorio-10 || num >= aleatorio+10) && (num <= aleatorio- 10 || num <= aleatorio+10))
                {
                    printf("Muito quente!!\n");
                }
                else if((num >= aleatorio-20 || num >= aleatorio+20) && (num <= aleatorio- 20 || num <= aleatorio+20))
                {
                    printf("Quente!!\n");
                }
                else if((num >= aleatorio-30 || num >= aleatorio+30) && (num <= aleatorio- 30 || num <= aleatorio+30))
                {
                    printf("Frio!!\n");
                }
                else if((num >= aleatorio-50 || num >= aleatorio+50) && (num <= aleatorio- 50 || num <= aleatorio+50))
                {
                    printf("Muito frio!!\n");
                }
                else if((num >= aleatorio-75 || num >= aleatorio+75) && (num <= aleatorio- 75 || num <= aleatorio+75))
                {
                    printf("Gelado!!\n");
                }
                else if ((num >= aleatorio-200 || num >= aleatorio+200) && (num <= aleatorio- 200 || num <= aleatorio+200))
                {
                    printf("Congelado!!\n");
                }
            }
            else
            {
                printf("\nPARABÉNS, Você encontrou o número sorteado que era %i!!!", aleatorio);
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
