#include <stdio.h>

int main (){
    double raio; 
    double area;
    
    printf("Digite o valor do raio: \n");
    scanf("%lf\n", &raio);
    area = 3.14159 * (raio * raio);
    
    printf("A = %.4lf" ,area);
    
    return 0;
}