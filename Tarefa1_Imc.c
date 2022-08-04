#include <stdio.h>
#include <locale.h>

/*Sabendo que o IMC (Índice de massa corporal) é obtido em função da altura e do peso (imc=peso/(altura*altura)).
Crie um algoritmo que leia os valores do peso e da altura, apresente o valor do imc e a respetiva situação sabendo que:

IMC                     Situação

Abaixo de 19.99         Abaixo do peso
Entre 20 e 24.99        Peso Normal
Entre 25 e 29.99        Acima do Peso
Entre 30 e 35           Obesidade
Acima de 35             Grande Obesidade

*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    float alt = 0, peso = 0, imc = 0;

    printf("=-=-=-=-=- CALCULADORA DE IMC -=-=-=-=-=\n\n");
    printf("Digite a sua altura: [m] ");
    fflush(stdin);
    scanf("%f", &alt);
    printf("Digite o seu peso: [kg] ");
    fflush(stdin);
    scanf("%f", &peso);

    imc = (peso/(alt*alt));

    printf("\n---------- REALIZANDO OS CALCULOS ----------\n\n");

    if (imc <= 19.99){
        printf("Seu IMC é %.2f.\nVocê está abaixo do peso!\n", imc);
    }
    else if (imc <= 24.99){
        printf("Seu IMC é %.2f.\nSeu peso está em situação normal!\n", imc);
    }
    else if (imc <= 29.99){
        printf("Seu IMC é %.2f.\nVocê está acima do peso!\n", imc);
    }
    else if (imc <= 35){
        printf("Seu IMC é %.2f.\nVocê se encontra com um grau de obesidade!\n", imc);
    }else{
        printf("Seu IMC é %.2f.\nVocê está com Grande Obesidade!\n", imc);
    }


}
