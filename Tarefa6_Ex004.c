#include <stdio.h>
#include <locale.h>

/*
Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria.
O programa dever� perguntar qual o saldo inicial da conta e qual a opera��o que o utilizador
pretende efetuar (d�bito ou cr�dito), assim como o montante a debitar, atualizando o saldo da
conta sempre que se efetue uma opera��o. No final dever� devolver o saldo da conta.


Opc�o               Menu            C�lculo
D                   D�bito          saldo-montante
C                   Cr�dito         saldo+ montante
S                   Sair
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float montante = 0, saldo = 0;
    char op;

    printf("\t\t=-=-=-=-=- OPERA��ES BANC�RIAS -=-=-=-=-=\n\n");
    printf("\tOP��O\t\tMENU\t\t\tC�CULO\n");
    printf("\t [D]\t\tD�bito\t\t\tSaldo - montante\n");
    printf("\t [C]\t\tCr�dito\t\t\tSaldo + Montante\n");
    printf("\t [S]\t\tSair\n");

    printf("\nDigite o valor em conta: ");
    fflush(stdin);
    scanf("%f", &saldo);

    while (op != 'S'){
        printf("\nDigite a op��o desejada: [D/C/S] ");
        fflush(stdin);
        scanf("%c", &op);

        if (op != 'S'){
            switch(op){
                case 'D':
                case 'd':
                    printf("\nDigite o montante a debitar: ");
                    fflush(stdin);
                    scanf("%f", &montante);
                        if(saldo < montante){
                            printf("\nO saldo n�o pode ficar negativo, tente novamente...\n");
                        }else{
                            saldo -= montante;
                            printf("\nO saldo atual � %.2f euros.\n", saldo);
                        }
                    break;
                case 'C':
                case 'c':
                    printf("\nDigite o montante a creditar: ");
                    fflush(stdin);
                    scanf("%f", &montante);
                    saldo += montante;
                    printf("\nO saldo atual � %.2f euros.\n", saldo);
                    break;
                default:
                    printf("\nOp��o inv�lida! Tente novamente....\n");
                    }
        }else{
            op = 'S';
        }
    }
    printf("\nO valor final na sua conta ser� de %.2f euros.\n\n", saldo);
}
