#include <stdio.h>

int main () {
    int a, b, c, d;
    int diferenca;
    
    printf("Digite quatro números: %d\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    diferenca = (a * b - c * d);
    printf("DIFERENCA = %d\n", diferenca);
    
    return 0;
}