#include <stdio.h>

int main() {
    int n, h, m;
    
    printf("Digite um tempo de duração: \n");
    scanf("%d", &n);
    
    h = n / 3600;
    n = n % 3600;
    m = n / 60;
    n = n % 60;
    
    printf("%d:%d:%d\n", h, m, n);
    
    return 0;
}