#include <stdio.h>

int main(){
    int A;
    int B;
    int res;

    scanf("%d", &A);

    scanf("%d", &B);
    
    if(B == 0){
        printf("%d eh maior que %d\n", A, B);
        printf("%d nao eh multiplo de %d\n", A, B);
    }
    
    else if(A == B){
        printf("Os valores lidos sao iguais");
    }
    
    else if(A > B){
        res = A % B;
        printf("%d eh maior que %d\n", A, B);

        if(res == 0){
            printf("%d eh multiplo de %d\n", A, B);
        }
        else{
            printf("%d nao eh multiplo de %d\n", A, B);
        }
    }    
    else{
        res = B % A;
        printf("%d eh maior que %d\n", B, A);

        res = B % A;

        if(res == 0){
            printf("%d eh multiplo de %d\n", B, A);
        }
        else{
            printf("%d nao eh multiplo de %d\n", B, A);
        }
    }

    return 0;
}