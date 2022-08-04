#include <stdio.h>
#include <locale.h>

/*
Uma empresa pretende atribuir um bónus de Natal aos seus colaboradores, em função da idade,
antiguidade (nº de anos de serviço) e nº de filhos calculado da seguinte forma:


-> 5 € por cada ano acima dos 45 anos de idade.
-> 10 € por ano de serviço, até 10 anos, e 20 € por cada ano a mais.
-> 25 € por filho, num máximo até 3 filhos. Acima de 3 filhos receberá sempre 75 €.


-> Validações:
o A idade deve estar compreendida entre 18 e 65.
o A Antiguidade não pode ser maior que a idade.
o O nº de filhos não pode ser um número negativo.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int idade = 0, filhos = 0, tempo = 0;

    printf("\t\t=-=-=-=-=- BÓNUS DE NATAL -=-=-=-=-=\n\n");
    printf("\t                  0      \n");
    printf("\t                 000       \n");
    printf("\t                00000      \n");
    printf("\t               0000000     \n");
    printf("\t              000000000      \n");
    printf("\t             00000000000      \n");
    printf("\t            0000000000000      \n");
    printf("\t           000000000000000     \n");
    printf("\t                  00           \n");
    printf("\t                  00         \n");
    printf("\t             00000000000      \n");
    printf("\t             0 0 0 0 0 0      \n");
    printf("\n-----------------------------------------------\n\n");

    printf("Digite a sua idade: ");
    fflush(stdin);
    scanf("%i", &idade);
    printf("Digite quantos anos você está na empresa: ");
    fflush(stdin);
    scanf("%i", &tempo);
    printf("Digite quantos filhos você tem: ");
    fflush(stdin);
    scanf("%i", &filhos);

    if ((idade >= 18 && idade <= 65) && (tempo < idade) && (tempo >= 0) && (filhos >= 0)){
        if (idade > 45){
            if (tempo > 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVocê receberá %i de bónus de natal!\n", ((idade-45) * 5) + (100 +((tempo - 10) * 20)) + filhos * 25);
                }else{
                    printf("\nVocê receberá %i de bónus de natal!\n", ((idade-45) * 5) + (100 +((tempo - 10) * 20)) + 75);
                }
            }else if (tempo > 0 && tempo < 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVocê receberá %i de bónus de natal!\n", ((idade-45) * 5)+(tempo * 10) + filhos * 25);
                }else{
                    printf("\nVocê receberá %i de bónus de natal!\n", ((idade-45) * 5)+(tempo * 10) + 75);
                }
            }else{
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVocê receberá %i de bónus de natal!\n", ((idade-45) * 5) + (filhos * 25));
                }else{
                    printf("\nVocê receberá %i de bónus de natal!\n", ((idade - 45) * 5) + 75);
                }
            }
        }else if(idade < 45){
            if (tempo > 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVocê receberá %i de bónus de natal!\n", ((100 + (tempo - 10)) * 20)+ filhos * 25);
                }else{
                    printf("\nVocê receberá %i de bónus de natal!\n", ((100 + (tempo - 10)) * 20) + 75);
                }
            }else if (tempo > 0 && tempo < 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVocê receberá %i de bónus de natal!\n", (tempo * 10) + filhos * 25);
                }else{
                    printf("\nVocê receberá %i de bónus de natal!\n", (tempo * 10) + 75);
                }
            }else{
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVocê receberá %i de bónus de natal!\n", filhos * 25);
                }else{
                    printf("\nVocê receberá %i de bónus de natal!\n", 75);
                }
            }
        }else{
            printf("\nInfelizmente você não receberá bónus de natal!\n");
        }
    }else{
        printf("Entrada inválida, tente novamente!");
    }
    printf("\n-----------------------------------------------------------------------------\n\n");
}
