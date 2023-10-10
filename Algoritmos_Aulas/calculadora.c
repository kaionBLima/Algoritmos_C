#include <stdio.h>

int main() {
    int numero1 = 10;
    int numero2;
    char operacao;
    // int resultado;
    /* Operadores lógicos para condicional:
     || -> representação do ou
     && -> representação do e
     ! -> operação de negação. Ex: if (!(operacao == '#')) -> se a operação for o #, 
     ele basicamente não executará */ 
    /* Operadores lógicos de binário (bit a bit):
     | -> representação do e -> 0 e 0 = 0, 0 e 1 = 0, 1 e 1 = 1
     & -> representação do ou -> 0 ou 0 = 0, 0 ou 1 = 1, 1 ou 1 = 1
     ~ -> representação de negação
     << -> adiciona 0 a esquerda, é como se fosse uma multiplicação
     >> -> adiciona 0 a direita, tendo a mesma função*/


    printf("Insira uma operacao aqui: \n");
    scanf("%c", &operacao);

    printf("Insira dois valores aqui: \n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    printf("Operacao: %c\n", operacao);

    if(operacao == '+'){
    printf("Resultado: %d\n", numero1 + numero2);
    }
    else if(operacao == '-'){
    printf("Resultado: %d\n", numero1 - numero2);
    } 
    else if(operacao == '*' || operacao == 'x'){
    printf("Resultado: %d\n", numero1 * numero2);
    }
    else if(operacao == '/' && numero1 > numero2){
    printf("Resultado: %d\n", numero1 / numero2);
    }
    else if(operacao == '%'){
    printf("Resultado: %d\n", numero1 % numero2);
    } else {
        printf("OPERACAO INVALIDA!\n");
    }

    /*numero2 = ++numero1;  -> numero1 = numero1 + 1
    numero2 = numero1++;  -> numero2 = numero1;  numero1 = numero1 + 1

    resultado = numero1 % numero2;       
    resultado = numero1 - numero2;
    resultado = numero1 * numero2;
    resultado = numero1 + numero2;
    long int -> para aumentar o tamanho de bytes do int alocado na memória

    printf("Resultado: %d\n", numero1);
    printf("Resultado: %d\n", numero2); */

    return 0;

}