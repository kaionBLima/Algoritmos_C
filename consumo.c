#include <stdio.h>

int main (){
    int km;
    float L;
    float x;
    
    printf("Digite o Km percorrido: \n");
    scanf("%d", &km);
    printf("Digite os litros gastos: \n");
    scanf("%.1lf", &L);
    x = km / L;
    
    printf("%.3lf km/l", x);
    
    return 0;
}