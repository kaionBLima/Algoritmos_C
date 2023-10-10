#include <stdio.h>

int main () {

    float valor;
    int numDePositivos = 0;
    float somaDosPositivos = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &valor);
        if(valor > 0) {
            numDePositivos++;
            somaDosPositivos = somaDosPositivos + valor;
            valor = 0;
        }
    }

    printf("%d valores positivos\n", numDePositivos);
    printf("%.1f\n", somaDosPositivos/numDePositivos);

    return 0;
}