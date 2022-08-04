#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

/*
Exercício 24

Usando um ciclo, crie um programa em C que produza o seguinte output:
**********(10) *(01)
*********(09) **(02)
********(08) ***(03)
*******(07) ****(04)
******(06) *****(05)
*****(05) ******(06)
****(04) *******(07)
***(03) ********(08)
**(02) *********(09)
*(01) **********(10)
*/

void main(){
    setlocale(LC_ALL, "Portuguese");
    float i, j;


        for(i=10;i>=01;i--){
            for(j=01;j<=i;j++)
                putchar('*');
                printf(" (%.0f)  ", i);
            for(j=10;j>=i;j--)
                putchar('*');
                printf(" (%.0f) ", 10-j);
                putchar('\n');
        }
}
