#include <stdio.h>
#include <locale.h>

/*
Dados tr�s valores A, B e C, verificar se podem ser comprimentos de lados de um tri�ngulo e,
se formam um tri�ngulo equil�tero, is�sceles ou escaleno. Considere que:

-> O comprimento de um lado do tri�ngulo � menor que a soma dos dois outros lados;
-> Um tri�ngulo equil�tero deve ter os tr�s lados com o mesmo tamanho;
->Um tri�ngulo is�sceles deve ter pelo menos dois lados com o mesmo tamanho;
-> Um tri�ngulo escaleno deve ter os tr�s lados com tamanhos diferente;
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 0, c = 0;

    printf("=-=-=-=-=- VERIFICANDO TRI�NGULOS -=-=-=-=-=\n");
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
            printf("Com essas medidas, temos um tri�ngulo equil�tero.");
        }else if (a != b && a != c && b != c){
            printf("Com essas medidas, temos um tri�ngulo escaleno.");
        }else{
            printf("Com essas medidas, temos um tri�ngulo is�sceles.");
        }
    }else{
        printf("Essas medidas n�o permite se criar um tri�ngulo!!");
    }

}
