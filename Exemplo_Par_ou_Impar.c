#include <stdio.h>
#include <locale.h>

/* Solicitar ao utilizador um n�mero inteiro e informar se o mesmo � par ou impar */

void main(){
    setlocale(LC_ALL, "Portuguese");

    int numero = 0;

    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &numero);

    if(numero%2==0){
        printf("O n�mero � par");
    }else{
        printf("O n�meros � �mpar");
    }

}
