#include <stdio.h>
#include <math.h>

double calculaMontanteFimDoMes(int mes, double aporte, double juros) {
    return aporte * (1 + juros) * (((pow(1 + juros, mes) - 1) / juros));
}

void calculaEMostraMontantes(int num_meses, double aporte_mensal, double taxa_juros) {
    for (int i = 1; i <= num_meses; i++) {
        double montante = calculaMontanteFimDoMes(i, aporte_mensal, taxa_juros);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);
    }
}

int main() {
    int num_meses;
    double aporte_mensal, taxa_juros;

    scanf("%d", &num_meses);
    scanf("%lf", &aporte_mensal);
    scanf("%lf", &taxa_juros);

    calculaEMostraMontantes(num_meses, aporte_mensal, taxa_juros);

    return 0;
}
