#include <stdio.h>
#include <locale.h>

/* Solicitar ao utilizador a velocidade máxima dentro da localidade e a velocidade do condutor.
Por cada km em excesso acrescia 5 euros. */

void main(){
    setlocale(LC_ALL, "Portuguese");

    int vm = 0, vc = 0;

    printf("Qual a velocidade máxima permitida? ");
    fflush(stdin);
    scanf("%i", &vm);
    printf("Qual a velocidade do condutor? ");
    fflush(stdin);
    scanf("%i", &vc);

    if(vc>vm){
        printf("Circulava com excesso de velocidade e o valor da multa é: %i", (vc-vm)*5);
    }else{
        printf("O condutor circulava dentro dos limites");
    }

}
