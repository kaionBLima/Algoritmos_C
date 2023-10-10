#include <stdio.h>

int main (){
    int id;
    
    printf("Informe a idade em dias: \n");
    scanf("%d", &id);
    
    printf("%d ano(s)\n", id/365);
    id = id%365;
    printf("%d mês(es)\n", id/30);
    id = id%30;
    printf("%d dia(s)\n", id/1);
    
    return 0;
}