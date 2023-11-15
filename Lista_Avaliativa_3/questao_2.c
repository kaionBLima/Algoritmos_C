#include <stdio.h>
#include <math.h>

double calculaMontante(int m, double apte, double j) {
    return apte * (1 + j) * (((pow(1 + j, m) - 1) / j));
}

void calculaEMostraMontantes(int num_meses, double apte_mensal, double taxaDeJuros) {
    for (int i = 1; i <= num_meses; i++) {
        double montante = calculaMontante(i, apte_mensal, taxaDeJuros);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);
    }
}

int main() {
    int num_meses;
    double apte_mensal, taxaDeJuros;

    scanf("%d", &num_meses);
    scanf("%lf", &apte_mensal);
    scanf("%lf", &taxaDeJuros);

    calculaEMostraMontantes(num_meses, apte_mensal, taxaDeJuros);

    return 0;
}
