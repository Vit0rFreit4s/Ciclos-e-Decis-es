#include <stdio.h>
#include <locale.h>

/* Solicitar ao utilizador um número inteiro e informar se o mesmo é par ou impar */

void main(){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0;

    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i", &numero);

    if(numero%2==0){
        printf("O número é par");
    }else{
        printf("O números é ímpar");
    }

}
