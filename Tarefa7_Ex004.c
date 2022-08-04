#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

/*

Exerc�cio 4

Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero) e 15.
O programa deve gerar os n�meros at� que o n�mero 15 seja sorteado.
O programa deve mostrar tamb�m, no final, a quantidade de n�meros gerados.

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int quantidade = -1, num;
    srand(time(NULL));

    do{
        num = rand()%16;
        Sleep(1000);
        switch(num){
            case 0:
                printf("zero\n");
                break;
            case 1:
                printf("um\n");
                break;
            case 2:
                printf("dois\n");
                break;
            case 3:
                printf("tr�s\n");
                break;
            case 4:
                printf("quatro\n");
                break;
            case 5:
                printf("cinco\n");
                break;
            case 6:
                printf("seis\n");
                break;
            case 7:
                printf("sete\n");
                break;
            case 8:
                printf("oito\n");
                break;
            case 9:
                printf("nove\n");
                break;
            case 10:
                printf("dez\n");
                break;
            case 11:
                printf("onze\n");
                break;
            case 12:
                printf("doze\n");
                break;
            case 13:
                printf("treze\n");
                break;
            case 14:
                printf("quatorze\n");
                break;
            default:
                printf("quinze\n");

        }
    quantidade++;
    }while(num != 15);
    printf("\nO programa gerou %i n�meros.\n", quantidade);
    printf("\nPrograma finalizado!!!\n\n");

}
