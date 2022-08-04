#include <stdio.h>
#include <locale.h>

/*
Pretende-se: Desenvolver um programa em C que gere um número aleatório entre  0 e 100.
O utilizador vai ter 5 tentativas para adivinhar o número. A cada tentativa informa se o
número está abaixo, acima ou se acertou. Se acertou o programa termina e deve dar a possibilidade de
jogar outra vez. Se esgotadas as tentativas e não adivinhar mostra o número gerado e deve dar também a
possibilidade de jogar oura vez.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int i = 1, sorteado = 0, num = 0;
    char resposta;
    srand(time(NULL));

    printf("\t\t=-=-=-=-=- DESAFIO DE ADIVINHAÇÃO -=-=-=-=-=\n\n");
    printf("Você terá 5 tentativas para acertar o número que será gerado entre 0 e 100!!!\n");

    do{
        sorteado = rand()%101;
        for(i = 1;i <= 5; i++){
            printf("Digite o %iº número: ", i);
            scanf("%i", &num);

            if(sorteado == num){
                break;
            }
            else if(sorteado > num){
                printf("O número sorteado está acima de %i!\n", num);
            }else{
                printf("O número sorteado está abaixo de %i!\n", num);
            }
        }
        if(sorteado == num){
            printf("\n------------------------------");
            printf("\nParabéns, você acertou na %iª tentativa! O número foi sorteado foi %i.\n", i, sorteado);
            printf("\nO número sorteado foi %i!", sorteado);
            printf("\n------------------------------\n\n");
        }else{
            printf("\n------------------------------");
            printf("\nVocê não conseguiu acertar o número sorteado!.\n");
            printf("\nO número sorteado foi %i!", sorteado);
            printf("\n------------------------------\n\n");
        }
        printf("Quer tentar novamente? [S/N] ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta == 'S' || resposta == 's');
    printf("\n\n----- PROGRAMA FINALIZADO!!! -----\n\n");
}
