#include <stdio.h>
#include <locale.h>

/*
Fa�a um programa que leia um caracter e informe se o mesmo corresponde a um d�gito de 0 a 9.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    char caracter;

    printf("=-=-=-=-=- DESCOBRINDO N�MEROS -=-=-=-=-=\n");
    printf("Digite qualquer caracter e eu vou descobrir se digitou um n�mero: ");
    fflush(stdin);
    scanf("%c", &caracter);

    if (caracter == '0'){
        printf("Voc� digitou o n�mero '0'.");
    }else if (caracter == '1'){
        printf("Voc� digitou o n�mero '1'.");
    }else if (caracter == '2'){
        printf("Voc� digitou o n�mero '2'.");
    }else if (caracter == '3'){
        printf("Voc� digitou o n�mero '3'.");
    }else if (caracter == '4'){
        printf("Voc� digitou o n�mero '4'.");
    }else if (caracter == '5'){
        printf("Voc� digitou o n�mero '5'.");
    }else if (caracter == '6'){
        printf("Voc� digitou o n�mero '6'.");
    }else if (caracter == '7'){
        printf("Voc� digitou o n�mero '7'.");
    }else if (caracter == '8'){
        printf("Voc� digitou o n�mero '8'.");
    }else if (caracter == '9'){
        printf("Voc� digitou o n�mero '9'.");
    }else{
        printf("Voc� digitou uma letra.");
    }
}
