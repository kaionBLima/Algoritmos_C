#include <stdio.h>
#include <string.h>

int main () {
    int Ntes, Kpess;
    char SIdioma[21];
    scanf("%d", &Ntes);
    scanf("%d", &Kpess);

    for (int k = 0; k < Kpess; k++) { //k é o numero de linhas
    while(1) {
        scanf("%c", SIdioma);
        fgets(SIdioma, 21, stdin);

        if (SIdioma == SIdioma) {
            printf("%c", SIdioma);
        }
        else {
            printf("Ingles");
        }
        }
    }
    return 0;
}