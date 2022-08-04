#include <stdio.h>
#include <locale.h>

/*
Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária.
O programa deverá perguntar qual o saldo inicial da conta e qual a operação que o utilizador
pretende efetuar (débito ou crédito), assim como o montante a debitar, atualizando o saldo da
conta sempre que se efetue uma operação. No final deverá devolver o saldo da conta.


Opcão               Menu            Cálculo
D                   Débito          saldo-montante
C                   Crédito         saldo+ montante
S                   Sair
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float montante = 0, saldo = 0;
    char op;

    printf("\t\t=-=-=-=-=- OPERAÇÕES BANCÁRIAS -=-=-=-=-=\n\n");
    printf("\tOPÇÃO\t\tMENU\t\t\tCÁCULO\n");
    printf("\t [D]\t\tDébito\t\t\tSaldo - montante\n");
    printf("\t [C]\t\tCrédito\t\t\tSaldo + Montante\n");
    printf("\t [S]\t\tSair\n");

    printf("\nDigite o valor em conta: ");
    fflush(stdin);
    scanf("%f", &saldo);

    while (op != 'S'){
        printf("\nDigite a opção desejada: [D/C/S] ");
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
                            printf("\nO saldo não pode ficar negativo, tente novamente...\n");
                        }else{
                            saldo -= montante;
                            printf("\nO saldo atual é %.2f euros.\n", saldo);
                        }
                    break;
                case 'C':
                case 'c':
                    printf("\nDigite o montante a creditar: ");
                    fflush(stdin);
                    scanf("%f", &montante);
                    saldo += montante;
                    printf("\nO saldo atual é %.2f euros.\n", saldo);
                    break;
                default:
                    printf("\nOpção inválida! Tente novamente....\n");
                    }
        }else{
            op = 'S';
        }
    }
    printf("\nO valor final na sua conta será de %.2f euros.\n\n", saldo);
}
