#include <stdio.h>

int main (){

    /*Evitar as seguintes coisas:
    printf(" valor da posicao -1: %d\n", vetor[-1]) ;
    printf(" valor da posicao 4: %d\n", vetor[4]) Os vetores sempre começam a partir da posição 0*/
    
    /* Primeira forma de declarar vetor
    printf("Valor da posicao 0: %d\n", vetor[0]);
    printf("VAlor da posicao 1: %d\n", vetor[1]);*/

    // Outra forma de declarar vetor:
    int vetor[4];

    for(int i = 0; i <= 3; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Valor da posicao 0: %d\n", vetor[0]);
    printf("VAlor da posicao 1: %d\n", vetor[1]);
    printf("VAlor da posicao 1: %d\n", vetor[2]);

    return 0;
}