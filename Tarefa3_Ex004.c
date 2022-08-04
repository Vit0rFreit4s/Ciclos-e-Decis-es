#include <stdio.h>
#include <locale.h>

/*
Leia a idade e o tempo de serviço de um trabalhador e escrever se ele pode ou não reformar-se. As condições são:

-> Ter pelo menos 65 anos de idade.
-> Ou ter trabalhado pelo menos 30 anos.
-> Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int idade = 0, tempo = 0;

    printf("=-=-=-=-=- CALCULO PARA TEMPO PARA REFORMAR-SE -=-=-=-=-=\n");
    printf("Quantos anos você tem? ");
    fflush(stdin);
    scanf("%i", &idade);
    printf("Quanto anos de serviço você tem? ");
    fflush(stdin);
    scanf("%i", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)){
        printf("Com essa idade e/ou esse tempo de serviço, já pode reformar-se!");
    }else{
        printf("Com essa idade e/ou tempo de serviço, não pode reformar-se ainda");
    }
}
