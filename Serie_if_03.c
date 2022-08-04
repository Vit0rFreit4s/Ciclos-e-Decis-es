#include <stdio.h>
#include <locale.h>

/*
Faça um programa que leia um caracter e informe se o mesmo corresponde a um dígito de 0 a 9.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    char caracter;

    printf("=-=-=-=-=- DESCOBRINDO NÚMEROS -=-=-=-=-=\n");
    printf("Digite qualquer caracter e eu vou descobrir se digitou um número: ");
    fflush(stdin);
    scanf("%c", &caracter);

    if (caracter == '0'){
        printf("Você digitou o número '0'.");
    }else if (caracter == '1'){
        printf("Você digitou o número '1'.");
    }else if (caracter == '2'){
        printf("Você digitou o número '2'.");
    }else if (caracter == '3'){
        printf("Você digitou o número '3'.");
    }else if (caracter == '4'){
        printf("Você digitou o número '4'.");
    }else if (caracter == '5'){
        printf("Você digitou o número '5'.");
    }else if (caracter == '6'){
        printf("Você digitou o número '6'.");
    }else if (caracter == '7'){
        printf("Você digitou o número '7'.");
    }else if (caracter == '8'){
        printf("Você digitou o número '8'.");
    }else if (caracter == '9'){
        printf("Você digitou o número '9'.");
    }else{
        printf("Você digitou uma letra.");
    }
}
