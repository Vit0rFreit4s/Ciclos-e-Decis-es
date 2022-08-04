#include <stdio.h>
#include <locale.h>

/* Solicitar ao utilizador o valor das vendas de dado vendedor e calcular o valor da comiss�o
em fun��o da seguinte tabela:

vendas < 5000 - n�o tem comiss�o
>= 5000 e <10000 - 5% de comiss�o
>=10000 e <20000 - 10% de comiss�o
>= 20000 - 15% de comiss�o
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    float vendas = 0;

    printf("Digite o valor das vendas: ");
    fflush(stdin);
    scanf("%f", &vendas);

    if (vendas < 5000){
        printf("N�o tem comiss�o.");
    }
    else if (vendas <10000){
        printf("O valor da comiss�o �: %.2f", (vendas*0.05));
    }
    else if (vendas < 20000){
        printf("O valor da comiss�o �: %.2f", (vendas*0.1));
    }else{
        printf("O valor da comiss�o �: %.2f", (vendas*0.15));
    }

}
