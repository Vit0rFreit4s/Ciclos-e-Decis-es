#include <stdio.h>
#include <locale.h>

/* Solicitar ao utilizador o valor das vendas de dado vendedor e calcular o valor da comissão
em função da seguinte tabela:

vendas < 5000 - não tem comissão
>= 5000 e <10000 - 5% de comissão
>=10000 e <20000 - 10% de comissão
>= 20000 - 15% de comissão
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float vendas = 0;

    printf("Digite o valor das vendas: ");
    fflush(stdin);
    scanf("%f", &vendas);

    if (vendas < 5000){
        printf("Não tem comissão.");
    }
    else if (vendas <10000){
        printf("O valor da comissão é: %.2f", (vendas*0.05));
    }
    else if (vendas < 20000){
        printf("O valor da comissão é: %.2f", (vendas*0.1));
    }else{
        printf("O valor da comissão é: %.2f", (vendas*0.15));
    }

}
