#include <stdio.h>
#include <locale.h>

/*
Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada funcionário.
Os funcionários com menor salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na
empresa, cada funcionário irá receber um bónus adicional de salário. Faça um programa que leia:

-> o valor do salário atual do funcionário;

-> o tempo de serviço deste funcionário na empresa (quantidade de anos de trabalho na empresa).

Use a tabela para calcular o salário reajustado deste funcionário e mostre o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenho direito a aumento.
Salário Atual Reajuste Tempo de Serviço Bónus

Até 500,00 25% Abaixo de 1 ano Sem Bónus
Até 1000,00 20% De 1 a 3 anos 100,00
Até 1500,00 15% De 4 a 6 anos 200,00
Até 2000,00 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float sal_atual = 0, temp_serv = 0;

    printf("=-=-=-=-=- CALCULADORA DE AUMENTOS -=-=-=-=\n");
    printf("Digite o seu salário atual: ");
    fflush(stdin);
    scanf("%f", &sal_atual);
    printf("Digite a quantos anos trabalha na empresa: ");
    fflush(stdin);
    scanf("%f", &temp_serv);

    if (temp_serv < 1){
        if (sal_atual <= 500){
            printf("Seu novo salário será de %.2f euros. Como tem menos de 1 ano de casa não tem direito a bónus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo salário será de %.2f euros. Como tem menos de 1 ano de casa não tem direito a bónus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo salário será de %.2f euros. Como tem menos de 1 ano de casa não tem direito a bónus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo salário será de %.2f euros. Como tem menos de 1 ano de casa não tem direito a bónus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu salário, não terá reajuste. Como tem menos de 1 ano de casa não tem direito a bónus!");
        }
    }else if (temp_serv < 3){
        if (sal_atual <= 500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 100 euros de bónus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 100 euros de bónus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 100 euros de bónus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 100 euros de bónus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu salário, não terá reajuste. Como tem 1 ano de casa receberá mais 100 euros de bónus!");
        }
    }else if (temp_serv < 6){
        if (sal_atual <= 500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 200 euros de bónus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 200 euros de bónus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 200 euros de bónus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 200 euros de bónus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu salário, não terá reajuste. Como tem 1 ano de casa receberá mais 200 euros de bónus!");
        }
    }else if (temp_serv < 10){
        if (sal_atual <= 500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 300 euros de bónus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 300 euros de bónus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 300 euros de bónus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 300 euros de bónus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu salário, não terá reajuste. Como tem 1 ano de casa receberá mais 300 euros de bónus!");
        }

    }else{
        if (sal_atual <= 500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 500 euros de bónus!", (sal_atual*0.25)+sal_atual);
        }else if (sal_atual <= 1000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 500 euros de bónus!", (sal_atual*0.2)+sal_atual);
        }else if (sal_atual <= 1500){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 500 euros de bónus!", (sal_atual*0.15)+sal_atual);
        }else if (sal_atual <= 2000){
            printf("Seu novo salário será de %.2f euros. Como tem 1 ano de casa receberá mais 500 euros de bónus!", (sal_atual*0.1)+sal_atual);
        }else{
            printf("Pelo valor do seu salário, não terá reajuste. Como tem 1 ano de casa receberá mais 500 euros de bónus!");
        }
    }
}
