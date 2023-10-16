#include <stdio.h>
#include <string.h>

// Função para determinar o vencedor de um caso de teste
char* determinar_vencedor(char* nome1, char* escolha1, char* nome2, char* escolha2, int n, int m) {
    int soma = n + m;
    if (soma % 2 == 0) {
        if (strcmp(escolha1, "PAR") == 0) {
            return nome1;
        } else {
            return nome2;
        }
    } else {
        if (strcmp(escolha1, "IMPAR") == 0) {
            return nome1;
        } else {
            return nome2;
        }
    }
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        char jogador1[100], escolha1[5], jogador2[100], escolha2[5];
        int n, m;
        scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);
        scanf("%d %d", &n, &m);

        char* vencedor = determinar_vencedor(jogador1, escolha1, jogador2, escolha2, n, m);
        printf("%s\n", vencedor);
    }

    return 0;
}
