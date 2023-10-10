#include <stdio.h>

int main(){

    float salario;
    float porcentagem;
    char nivel; 

    scanf(" %c", &nivel);

    scanf("%f", &salario);

    switch(nivel){
        case 'a':
            porcentagem = salario * 0.05 + salario;
            printf("R$ %.2f", porcentagem);            
            break;

        case 'b':
            porcentagem = salario * 0.07 + salario;
            printf("R$ %.2f", porcentagem);            
            break;
        
        case 'c':
            porcentagem = salario * 0.08 + salario;
            printf("R$ %.2f", porcentagem);            
            break;

        default:
            printf("Nivel invalido!");
            break;
    }
    return 0;
}