#include <stdio.h>

int main () {

    int c = 5;
    int *p; //Declaração de ponteiro 

    p = &c; //Salvar os dados de c no ponteiro p, faz-se isso através deste comando

    printf("Valor de c: %d\n", c);
    printf("Valor de endereco de memoria c: %p\n", c);
    printf("Valor de p: %p\n", p);
    printf("Valor de c a partir de p: %d\n", *p); //Acessar o dado salvo em p que foi dado a c
     *p = 10; // c = 10;
    printf("Alterando o valor de c pelo ponteiro p...\n");
    printf("Valor de c: %d\n", c);

    int p1 = p; // p1 recebe endereço de memoria salvo em p
    printf("Valor de p1: %p\n", p1);
    printf("Valor de p pela variavel p1: %d\n", *p);

    return 0;
}