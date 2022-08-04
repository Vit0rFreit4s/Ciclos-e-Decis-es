#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Pretende-se calcular a idade em anos em fun��o do dia, m�s e ano de nascimento e dia, m�s e ano atual.

Considere o seguinte:
- Em condi��es normais a idade � a diferen�a entre o ano atual e ano de nascimento.
No entanto se o m�s atual for inferior ao m�s de nascimento ou o m�s atual igual ao m�s de nascimento
e o dia atual inferior ao dia de nascimento a idade � o ano atual menos o ano de nascimento menos um.
*/

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time (&t);
    struct tm *data;
    data = localtime (&t);
    int dia = data ->tm_mday;
    int mes = data ->tm_mon + 1;
    int ano = data ->tm_year + 1900;

    int dia_nasc = 0, mes_nasc = 0, ano_nasc = 0;

    printf("=-=-=-=-=- QUANTOS ANOS VOC� TEM? -=-=-=-=-=\n");
    printf("Digite o dia do seu nascimento: ");
    fflush(stdin);
    scanf("%i", &dia_nasc);
    printf("Digite o m�s do seu nascimento: ");
    fflush(stdin);
    scanf("%i", &mes_nasc);
    printf("Digite o ano do seu nascimento: ");
    fflush(stdin);
    scanf("%i", &ano_nasc);

    if (mes<=mes_nasc || mes == mes_nasc && dia<dia_nasc){
        printf("Voc� tem %i anos de idade.", (ano-ano_nasc-1));
    }else{
        printf("Voc� tem %i anos de idade.", (ano-ano_nasc));
    }

}
