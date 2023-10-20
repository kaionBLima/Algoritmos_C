#include <stdio.h>

int main() {
    int matrizA[4][4], matrizB[4][4], valorFinal[4][4];
    char operacao[5];

    // Ler a primeira matriz
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &matrizA[linha][coluna]);
        }
    }

    // Ler a segunda matriz
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &matrizB[linha][coluna]);
        }
    }

    // Ler a operação
    scanf("%s", operacao);

    // Realizar a operação e calcular o valorFinal
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            if (strcmp(operacao, "soma") == 0) {
                valorFinal[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
            } else if (strcmp(operacao, "sub") == 0) {
                valorFinal[linha][coluna] = matrizA[linha][coluna] - matrizB[linha][coluna];
            } else if (strcmp(operacao, "mult") == 0) {
                valorFinal[linha][coluna] = 0;
                for (int k = 0; k < 4; k++) {
                    valorFinal[linha][coluna] += matrizA[linha][k] * matrizB[k][coluna];
                }
        }
    }

    // Imprimir o valorFinal formatado
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%4d", valorFinal[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
