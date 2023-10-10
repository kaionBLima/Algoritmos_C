#include <stdio.h>

int main (){

    unsigned int numero;
    int soma = 0, guardarDadoDeNumero;

        scanf("%d", &numero);

        if (numero %2 == 0) {
            printf("%d eh par\n", numero);
        }
        else {
            printf("%d eh impar\n", numero);
        }
        
        guardarDadoDeNumero = numero;
        while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }
    
    printf("A soma dos algarismos de %d eh %d", guardarDadoDeNumero, soma);

    return 0;
}