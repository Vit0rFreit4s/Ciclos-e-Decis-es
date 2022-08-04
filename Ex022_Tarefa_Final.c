#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exercício 22

Crie um programa em C que cumprimente o utilizador solicitando a hora atual.
Se a hora estiver entre 8 e 11 escrever “Bom dia.”, entre 12 e 19 “Boa tarde”, outra hora “Boa noite”.
(Utilize a estrutura if).
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    int h_atual;

    printf("=-=-=-=- PROGRAMA DE CUMPRIMENTOS -=-=-=-=-= \n");
    printf("Que horas são? ");
    scanf("%i", &h_atual);

    if(h_atual >= 0 && h_atual <= 23){
        if(h_atual >= 8 && h_atual <= 11){
            printf("\nBom dia!!");
        }
        else if(h_atual >= 12 && h_atual <= 19){
            printf("\nBoa tarde!!");
        }
        else{
            printf("\nBoa noite!!");
        }
    }else{
        printf("\nHora inválida...");
    }
}
