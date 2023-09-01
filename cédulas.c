#include <stdio.h>

int main (){
    int valor;
    
    printf("Digite um valor: \n");
    scanf("%d", &valor);
    
    printf("%d\n", valor);
    printf("%d nota(s) de 100 R$\n", valor/100);
    valor = valor%100;
     printf("%d nota(s) de 50 R$\n", valor/50);
    valor = valor%50;
     printf("%d nota(s) de 20 R$\n", valor/20);
    valor = valor%20;
     printf("%d nota(s) de 10 R$\n", valor/10);
    valor = valor%10;
     printf("%d nota(s) de 5 R$\n", valor/5);
    valor = valor%5;
     printf("%d nota(s) de 2 R$\n", valor/2);
    valor = valor%2;
     printf("%d nota(s) de 1 R$\n", valor/1);
    
    return 0;
}