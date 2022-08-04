#include <stdio.h>
#include <locale.h>

/*
Uma empresa pretende atribuir um b�nus de Natal aos seus colaboradores, em fun��o da idade,
antiguidade (n� de anos de servi�o) e n� de filhos calculado da seguinte forma:


-> 5 � por cada ano acima dos 45 anos de idade.
-> 10 � por ano de servi�o, at� 10 anos, e 20 � por cada ano a mais.
-> 25 � por filho, num m�ximo at� 3 filhos. Acima de 3 filhos receber� sempre 75 �.


-> Valida��es:
o A idade deve estar compreendida entre 18 e 65.
o A Antiguidade n�o pode ser maior que a idade.
o O n� de filhos n�o pode ser um n�mero negativo.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");

    int idade = 0, filhos = 0, tempo = 0;

    printf("\t\t=-=-=-=-=- B�NUS DE NATAL -=-=-=-=-=\n\n");
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
    printf("Digite quantos anos voc� est� na empresa: ");
    fflush(stdin);
    scanf("%i", &tempo);
    printf("Digite quantos filhos voc� tem: ");
    fflush(stdin);
    scanf("%i", &filhos);

    if ((idade >= 18 && idade <= 65) && (tempo < idade) && (tempo >= 0) && (filhos >= 0)){
        if (idade > 45){
            if (tempo > 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((idade-45) * 5) + (100 +((tempo - 10) * 20)) + filhos * 25);
                }else{
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((idade-45) * 5) + (100 +((tempo - 10) * 20)) + 75);
                }
            }else if (tempo > 0 && tempo < 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((idade-45) * 5)+(tempo * 10) + filhos * 25);
                }else{
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((idade-45) * 5)+(tempo * 10) + 75);
                }
            }else{
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((idade-45) * 5) + (filhos * 25));
                }else{
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((idade - 45) * 5) + 75);
                }
            }
        }else if(idade < 45){
            if (tempo > 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((100 + (tempo - 10)) * 20)+ filhos * 25);
                }else{
                    printf("\nVoc� receber� %i de b�nus de natal!\n", ((100 + (tempo - 10)) * 20) + 75);
                }
            }else if (tempo > 0 && tempo < 10){
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVoc� receber� %i de b�nus de natal!\n", (tempo * 10) + filhos * 25);
                }else{
                    printf("\nVoc� receber� %i de b�nus de natal!\n", (tempo * 10) + 75);
                }
            }else{
                if(filhos >= 0 && filhos <= 3){
                    printf("\nVoc� receber� %i de b�nus de natal!\n", filhos * 25);
                }else{
                    printf("\nVoc� receber� %i de b�nus de natal!\n", 75);
                }
            }
        }else{
            printf("\nInfelizmente voc� n�o receber� b�nus de natal!\n");
        }
    }else{
        printf("Entrada inv�lida, tente novamente!");
    }
    printf("\n-----------------------------------------------------------------------------\n\n");
}
