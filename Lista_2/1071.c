#include <stdio.h>

int main (){

    int a, b, maior, menor, soma;
    soma = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        maior = a;
        menor = b;
    } else if (a < b){
        menor = a;
        maior = b;
    } else {
        maior = a;
        menor = b;
    }

    for(int i = menor + 1;i <= maior -1; i++){
      if(abs(1)%2 == 1){ //checa de i é ímpar
        soma = soma + 1;
      }  
    }
    printf("%d", soma);

    return 0;
}