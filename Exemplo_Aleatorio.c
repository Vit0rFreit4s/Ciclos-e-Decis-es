#include <stdio.h>
#include <locale.h>
#include <time.h>

// Gerar um número aleatório

void main(){
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL)); // forma de incializar o random
    int contador, numero;

    for(contador = 0; contador < 5; contador++){
    numero = rand()%10+1;
    printf("\n%i\n", numero);
    sleep(1);
    }
}
