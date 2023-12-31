#include <stdio.h>

struct Jogador {
    char nome[30];
    char posicao;
    double forca;
};

struct Time {
    char nome[30];
    struct Jogador jogadores[11];
};

double calcularForcaTime(struct Time time) {
    double forcaTotal = 0;

    for (int i = 0; i < 11; i++) {
        char posicao = time.jogadores[i].posicao;
        double forca = time.jogadores[i].forca;

        if (posicao == 'G') {
            forcaTotal += 8.0 * forca;
        } else if (posicao == 'L') {
            forcaTotal += 10.0 * forca;
        } else if (posicao == 'Z') {
            forcaTotal += 5.0 * forca;
        } else if (posicao == 'V') {
            forcaTotal += 8.0 * forca;
        } else if (posicao == 'M') {
            forcaTotal += 11.0 * forca;
        } else if (posicao == 'A') {
            forcaTotal += 12.0 * forca;
        }
    }

    return forcaTotal / 100.0;
}

int main() {
    struct Time time1, time2;

    //Time 1
    scanf("%29[^\n]%*c", time1.nome);
    for (int i = 0; i < 11; i++) {
        scanf("%29[^;]; %c; %lf%*c", time1.jogadores[i].nome, &time1.jogadores[i].posicao, &time1.jogadores[i].forca);
    }

    //Time 2
    scanf("%29[^\n]%*c", time2.nome);
    for (int i = 0; i < 11; i++) {
        scanf("%29[^;]; %c; %lf%*c", time2.jogadores[i].nome, &time2.jogadores[i].posicao, &time2.jogadores[i].forca);
    }

    double forcaTime1 = calcularForcaTime(time1);
    double forcaTime2 = calcularForcaTime(time2);

    printf("%s: %.2lf de forca\n", time1.nome, forcaTime1);
    printf("%s: %.2lf de forca\n", time2.nome, forcaTime2);

    if (forcaTime1 > forcaTime2) {
        printf("%s eh mais forte\n", time1.nome);
    } else if (forcaTime2 > forcaTime1) {
        printf("%s eh mais forte\n", time2.nome);
    } else {
        printf("Os times têm a mesma força: %.2lf\n", forcaTime1);
    }

    return 0;
}
