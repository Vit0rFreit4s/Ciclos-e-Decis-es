#include <stdio.h>
#include <locale.h>

// Solicitar ao utilizador a idade e se maior escrever "J� pode votar!"

void main(){
    setlocale(LC_ALL, "Portuguese");

    int idade = 0;

    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%i", &idade);
    if (idade>=18){
        printf("J� pode votar!");
    }else{
        printf("Ainda n�o pode votar!");
    }

}
