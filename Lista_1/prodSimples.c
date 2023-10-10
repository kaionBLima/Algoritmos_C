#include <stdio.h>

int main (){
    int valor1, valor2;
    int PROD;
    
    printf("Insira dois valores: \n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    PROD = valor1 * valor2;
    
    printf("PROD = %d\n", PROD);
    return 0;
}