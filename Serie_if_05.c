#include <stdio.h>
#include <locale.h>

/*
Ler tr�s valores A, B e C. Neste programa � necess�rio que A <= B <= C, portanto poder� ser necess�rio a troca de valores entre as vari�veis.
Dica: use uma vari�vel auxiliar para trocar os valores entre duas vari�veis.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 0, b = 0, c = 0, d = 0;

    printf("Introduza 3 n�meros que eu transformarei A <= B <= C: ");
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
    printf("O valor de A � %i, o valor de B � %i e o valor de C � %i", a, b, c);
}
