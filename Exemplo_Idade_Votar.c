#include <stdio.h>
#include <locale.h>

// Solicitar ao utilizador a idade e se maior escrever "Já pode votar!"

void main(){
    setlocale(LC_ALL, "Portuguese");

    int idade = 0;

    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%i", &idade);
    if (idade>=18){
        printf("Já pode votar!");
    }else{
        printf("Ainda não pode votar!");
    }

}
