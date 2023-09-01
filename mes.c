#include <stdio.h>

int main () {
    int mes;
    
    printf("Digite um número de 1 a 12: \n");
    scanf("%d", &mes);
    
      if (mes == 1){
        printf("Janeiro \n", mes);
    } else if  (mes == 2){
        printf("Fevereiro \n", mes);
    } else if  (mes == 3){
        printf("Março \n", mes);
    } else if  (mes == 4){
        printf("Abril \n", mes);
    } else if  (mes == 5){
        printf("Maio \n", mes);
    } else if  (mes == 6){
        printf("Junho \n", mes);
    } else if  (mes == 7){
        printf("Julho \n", mes);
    } else if  (mes == 8){
        printf("Agosto \n", mes);
    } else if  (mes == 9){
        printf("Setembro \n", mes);
    } else if  (mes == 10){
        printf("Outubro \n", mes);
    } else if  (mes == 10){
        printf("Novembro \n", mes);
    } else if  (mes == 12){
        printf("Dezembro \n", mes);
    } else {
        printf("Mes inexistente \n");
    }
    
    return 0;
}