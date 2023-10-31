#include <stdio.h>

int main (){

    int numero = 10;
    int vetor[10];

    for (int i = 0; i < numero; i++){
        scanf("%d", &vetor[i]);
    }

    while (numero > 1){

        for (int i = 0; i < numero; i++){
            printf("%d", vetor[i]);
        }
        printf("\n");

        for(int i = 0; i < numero - 1; i++){
            vetor[i] += vetor[i + 1];
        }
        numero = numero - 1;
    }

    printf("%d", vetor[0]);
      printf("\n");

    return 0;
}