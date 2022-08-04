#include <stdio.h>
#include <locale.h>

/*
Ler três valores A, B e C. Neste programa é necessário que A <= B <= C, portanto poderá ser necessário a troca de valores entre as variáveis.
Dica: use uma variável auxiliar para trocar os valores entre duas variáveis.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 0, b = 0, c = 0, d = 0;

    printf("Introduza 3 números que eu transformarei A <= B <= C: ");
    fflush(stdin);
    scanf("%i %i %i", &a, &b, &c);


   if (a>b){
        d = a;
        a = b;
        b = d;
   }
   if (b>c){
        d = b;
        b = c;
        c = d;
    }
    printf("O valor de A é %i, o valor de B é %i e o valor de C é %i", a, b, c);
}
