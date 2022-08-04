#include <stdio.h>
#include <locale.h>

/*
Escreva um programa completo que, dados dois números inteiros, mostre o maior deles,
assim, como a diferença existente entre ambos.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n1 = 0, n2 = 0;

    printf("=-=-=-=-=- MAIOR E A DIFERENÇA -=-=-=-=-=\n");
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);

    if (n1 > n2){
        printf("O maior número é o %i e a diferença entre o maior e o menor número digitado é %i", n1, (n1 - n2));
    }else if (n2 > n1){
        printf("O maior número é o %i e a diferença entre o maior e o menor número digitado é %i", n2, (n2 - n1));
    }else{
        printf("Os números são iguais!");
    }
}
