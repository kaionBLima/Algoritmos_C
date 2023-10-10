#include <stdio.h>

int main(){
    /*matriz é um conjunto de vetores. Primeiro [] é o numero de linhas que eu vou ter. Segundo []
    é o numero de colunas*/ 
    double notas[2][4];

    notas [0][0] + 9.8;

    printf("Insira 4 notas para aluno 1 e 4 notas para aluno 2: \n");
    for(int i = 0; i <= 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[0][i]);
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[1][i]);
    }
    printf("Notas do primereiro aluno: \n", notas);

    return 0;
}