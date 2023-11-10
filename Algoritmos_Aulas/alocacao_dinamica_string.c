#include <string.h>
#include <stdlib.h>
#include <stdio.h>

    //String com alocação estática vs dinâmica
int main (){
    //alocação estática de uma string

    char string_estatica[10]; //valor fixo

    strcpy(string_estatica, "hello"); //recebendo valor "hello"
    printf("string_estatica: %s\n", string_estatica);

    //alocação dinâmica

    char *string_dinamica;
    string_dinamica = (char*) malloc(10); //alocando 10 espaços para string dinamica "malloc"

    strcpy(string_dinamica, "hello 2");
    printf("string_dinamica: %s\n", string_dinamica);

    //alocação estática de vetor em int

    char vetor_est[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor_est[i]);
        printf("vetor_est[%d] = %d\n", i, vetor_est[i]);
    }

    //alocação dinamica 

    printf("Alocacao dinamica de vetor com malloc em int.\n");
    int *vetor_dinamico;
    vetor_dinamico = (int*) malloc(250000000*sizeof(int)); /*malloc serve para alocar espaço de forma mais dinamica
                                                            sizeof = tamanho de (int) -> que é 4 bytes. Ou seja, 5*4.*/
    
    if(vetor_dinamico == NULL) { /*NULL serve indicar valor anulavel/anulado por algum motivo, 
                                como esse que é por alocação de memoria grande*/
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor_dinamico[i]);
        printf("vetor_est[%d] = %d\n", i, vetor_dinamico[i]);
    }
 
    //Alocacao dinamica realloc
    //realloc é usada para redimensionar um espaço alocado previamente com malloc ou calloc
     printf("Alocacao dinamica com calloc alterando com realloc.\n");
    int *vetor_dinamico2;
    vetor_dinamico2 = (int*) malloc(5*sizeof(int)); 
    
    if(vetor_dinamico2 == NULL) { 
        printf("Nao ha memoria suficiente!!!\n");
        return 1;
    }
    for(int i = 0; i < 5; i++){
        vetor_dinamico2[i] = i + 1;
        printf("vetor_est[%d] = %d\n", i, vetor_dinamico2[i]);
    }

    printf("\n");
    vetor_dinamico2 = realloc (vetor_dinamico2, 3*sizeof(int));
    for (int i = 0; i < 3; i++){
        printf("%d\n", vetor_dinamico2[i]);
    }

    printf("\n");
    vetor_dinamico2 = realloc(vetor_dinamico2,10*sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor_dinamico2[i]);                                   
    }

    //Alocacao dinamica free
    /*É uma função que serve para desalocar memória alocada, essa
     memoria alocada que é desalocada, é a memoria alocada durante o tempo de execução*/
    

    return 0;
}