#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Consumir a quebra de linha pendente após a leitura de N

    for (int i = 0; i < N; i++) {
        char linha[15];
        fgets(linha, 15, stdin); // Ler até 14 caracteres (15 incluindo o caractere nulo)

        int soma = 0;

        for (int j = 0; j < strlen(linha); j++) {
            if (linha[j] >= '0' && linha[j] <= '9') {
                soma += linha[j] - '0';
            }
        }

        printf("%d\n", soma);
    }

    return 0;
}
