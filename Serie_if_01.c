#include <stdio.h>
#include <locale.h>

/*
Uma empresa decide dar um aumento aos seus funcion�rios de acordo com uma tabela que considera o sal�rio atual e o tempo de servi�o de cada funcion�rio.
Os funcion�rios com menor sal�rio ter�o um aumento proporcionalmente maior do que os funcion�rios com um sal�rio maior, e conforme o tempo de servi�o na
empresa, cada funcion�rio ir� receber um b�nus adicional de sal�rio. Fa�a um programa que leia:

-> o valor do sal�rio atual do funcion�rio;

-> o tempo de servi�o deste funcion�rio na empresa (quantidade de anos de trabalho na empresa).

Use a tabela para calcular o sal�rio reajustado deste funcion�rio e mostre o valor do sal�rio final reajustado, ou uma mensagem caso o funcion�rio n�o tenho direito a aumento.
Sal�rio Atual Reajuste Tempo de Servi�o B�nus

At� 500,00 25% Abaixo de 1 ano Sem B�nus
At� 1000,00 20% De 1 a 3 anos 100,00
At� 1500,00 15% De 4 a 6 anos 200,00
At� 2000,00 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float sal_atual = 0, temp_serv = 0;

    printf("=-=-=-=-=- CALCULADORA DE AUMENTOS -=-=-=-=\n");
    printf("Digite o seu sal�rio atual: ");
    fflush(stdin);
    scanf("%f", &sal_atual);
    printf("Digite a quantos anos trabalha na empresa: ");
    fflush(stdin);
    scanf("%f", &temp_serv);

    if (temp_serv < 1){
        if (sal_atual <= 500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem menos de 1 ano de casa n�o tem direito a b�nus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem menos de 1 ano de casa n�o tem direito a b�nus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem menos de 1 ano de casa n�o tem direito a b�nus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem menos de 1 ano de casa n�o tem direito a b�nus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu sal�rio, n�o ter� reajuste. Como tem menos de 1 ano de casa n�o tem direito a b�nus!");
        }
    }else if (temp_serv < 3){
        if (sal_atual <= 500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 100 euros de b�nus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 100 euros de b�nus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 100 euros de b�nus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 100 euros de b�nus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu sal�rio, n�o ter� reajuste. Como tem 1 ano de casa receber� mais 100 euros de b�nus!");
        }
    }else if (temp_serv < 6){
        if (sal_atual <= 500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 200 euros de b�nus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 200 euros de b�nus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 200 euros de b�nus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 200 euros de b�nus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu sal�rio, n�o ter� reajuste. Como tem 1 ano de casa receber� mais 200 euros de b�nus!");
        }
    }else if (temp_serv < 10){
        if (sal_atual <= 500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 300 euros de b�nus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 300 euros de b�nus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 300 euros de b�nus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 300 euros de b�nus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu sal�rio, n�o ter� reajuste. Como tem 1 ano de casa receber� mais 300 euros de b�nus!");
        }

    }else{
        if (sal_atual <= 500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 500 euros de b�nus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 500 euros de b�nus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 500 euros de b�nus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo sal�rio ser� de %.2f euros. Como tem 1 ano de casa receber� mais 500 euros de b�nus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu sal�rio, n�o ter� reajuste. Como tem 1 ano de casa receber� mais 500 euros de b�nus!");
        }
    }
}
