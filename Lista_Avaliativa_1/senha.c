#include <stdio.h>

int main(){
    int senha;
    int testaSenha;

    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    while(1){
        scanf("%d", &testaSenha);

        if(testaSenha == senha){
            printf("senha valida!\n");
            break;
        } 
        
        printf("senha invalida!\n");
        
    }
    return 0;
}