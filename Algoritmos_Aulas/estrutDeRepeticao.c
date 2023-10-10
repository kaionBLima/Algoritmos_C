#include <stdio.h>

int main (){

    int nota;

    // imprima a mensagem e leia a nota pelo menos uma vez
    do{
        printf("Insira uma nota positiva:\n");
        scanf("%d", &nota);
    } while(nota < 0);

    printf("Insira uma nota positiva:\n");
    scanf("%d", &nota);

    return 0;

    /*while(nota < 0){
        printf("Insira uma nota positiva:\n");
        scanf("%d", &nota);
    }*/

    /* int i;
    for( i = 0; i <= 6; i = i + 2){
        printf("Valor de i: %d\n", i);
    }

    printf("Saiu do for. Valor de i: %d\n", i); */

}