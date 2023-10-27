#include <stdio.h>

int main (){

    int vetor[5];

    for(int i = 0; i < 5; i++) {
        vetor[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}