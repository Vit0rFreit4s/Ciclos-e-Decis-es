#include <stdio.h>
#include <locale.h>
#include <time.h>

/*
Pretende-se calcular a idade em anos em função do dia, mês e ano de nascimento e dia, mês e ano atual.

Considere o seguinte:
- Em condições normais a idade é a diferença entre o ano atual e ano de nascimento.
No entanto se o mês atual for inferior ao mês de nascimento ou o mês atual igual ao mês de nascimento
e o dia atual inferior ao dia de nascimento a idade é o ano atual menos o ano de nascimento menos um.
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

    printf("=-=-=-=-=- QUANTOS ANOS VOCÊ TEM? -=-=-=-=-=\n");
    printf("Digite o dia do seu nascimento: ");
    fflush(stdin);
    scanf("%i", &dia_nasc);
    printf("Digite o mês do seu nascimento: ");
    fflush(stdin);
    scanf("%i", &mes_nasc);
    printf("Digite o ano do seu nascimento: ");
    fflush(stdin);
    scanf("%i", &ano_nasc);

    if (mes<=mes_nasc || mes == mes_nasc && dia<dia_nasc){
        printf("Você tem %i anos de idade.", (ano-ano_nasc-1));
    }else{
        printf("Você tem %i anos de idade.", (ano-ano_nasc));
    }

}
