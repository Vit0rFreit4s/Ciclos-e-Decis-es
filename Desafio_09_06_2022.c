#include <stdio.h>
#include <locale.h>

/*
Pretende-se: Desenvolver um programa em C que gere um n�mero aleat�rio entre  0 e 100.
O utilizador vai ter 5 tentativas para adivinhar o n�mero. A cada tentativa informa se o
n�mero est� abaixo, acima ou se acertou. Se acertou o programa termina e deve dar a possibilidade de
jogar outra vez. Se esgotadas as tentativas e n�o adivinhar mostra o n�mero gerado e deve dar tamb�m a
possibilidade de jogar oura vez.
*/

void main(){
    setlocale(LC_ALL,"Portuguese");
    int i = 1, sorteado = 0, num = 0;
    char resposta;
    srand(time(NULL));

    printf("\t\t=-=-=-=-=- DESAFIO DE ADIVINHA��O -=-=-=-=-=\n\n");
    printf("Voc� ter� 5 tentativas para acertar o n�mero que ser� gerado entre 0 e 100!!!\n");

    do{
        sorteado = rand()%101;
        for(i = 1;i <= 5; i++){
            printf("Digite o %i� n�mero: ", i);
            scanf("%i", &num);

            if(sorteado == num){
                break;
            }
            else if(sorteado > num){
                printf("O n�mero sorteado est� acima de %i!\n", num);
            }else{
                printf("O n�mero sorteado est� abaixo de %i!\n", num);
            }
        }
        if(sorteado == num){
            printf("\n------------------------------");
            printf("\nParab�ns, voc� acertou na %i� tentativa! O n�mero foi sorteado foi %i.\n", i, sorteado);
            printf("\nO n�mero sorteado foi %i!", sorteado);
            printf("\n------------------------------\n\n");
        }else{
            printf("\n------------------------------");
            printf("\nVoc� n�o conseguiu acertar o n�mero sorteado!.\n");
            printf("\nO n�mero sorteado foi %i!", sorteado);
            printf("\n------------------------------\n\n");
        }
        printf("Quer tentar novamente? [S/N] ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta == 'S' || resposta == 's');
    printf("\n\n----- PROGRAMA FINALIZADO!!! -----\n\n");
}
