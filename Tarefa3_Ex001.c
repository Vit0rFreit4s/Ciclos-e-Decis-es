#include <stdio.h>
#include <locale.h>

/*
Dados três valores A, B e C, verificar se podem ser comprimentos de lados de um triângulo e,
se formam um triângulo equilátero, isósceles ou escaleno. Considere que:

-> O comprimento de um lado do triângulo é menor que a soma dos dois outros lados;
-> Um triângulo equilátero deve ter os três lados com o mesmo tamanho;
->Um triângulo isósceles deve ter pelo menos dois lados com o mesmo tamanho;
-> Um triângulo escaleno deve ter os três lados com tamanhos diferente;
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 0, c = 0;

    printf("=-=-=-=-=- VERIFICANDO TRIÂNGULOS -=-=-=-=-=\n");
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &a);
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &b);
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &c);

    if (a < (b+c) || b < (a+c) || c < (a+b)){
        if (a == b && a == c){
            printf("Com essas medidas, temos um triângulo equilátero.");
        }else if (a != b && a != c && b != c){
            printf("Com essas medidas, temos um triângulo escaleno.");
        }else{
            printf("Com essas medidas, temos um triângulo isósceles.");
        }
    }else{
        printf("Essas medidas não permite se criar um triângulo!!");
    }

}
