#include <stdio.h>
#include <locale.h>

/*
Escreva um programa completo que, dados dois n�meros inteiros, mostre o maior deles,
assim, como a diferen�a existente entre ambos.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 0, n2 = 0;

    printf("=-=-=-=-=- MAIOR E A DIFEREN�A -=-=-=-=-=\n");
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);

    if (n1 > n2){
        printf("O maior n�mero � o %i e a diferen�a entre o maior e o menor n�mero digitado � %i", n1, (n1 - n2));
    }else if (n2 > n1){
        printf("O maior n�mero � o %i e a diferen�a entre o maior e o menor n�mero digitado � %i", n2, (n2 - n1));
    }else{
        printf("Os n�meros s�o iguais!");
    }
}
