#include <stdio.h>

int main () {
    int mes;
    
    printf("Digite um número de 1 a 12: \n");
    scanf("%d", &mes);
    
    switch (mes){
    case 1:
        printf("january\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        break;
    }

      /*if (mes == 1){
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
    }*/
    
    return 0;
}