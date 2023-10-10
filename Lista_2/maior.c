#include <stdio.h>

int main (){
    int a, b, c;
    int maiorAB;
    
    printf("Digite três valores: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    maiorAB = (a + b + abs(a - b)) / 2;
    maiorAB = (maiorAB + c + abs(maiorAB - c)) / 2;
    
    printf("%d eh o maior \n", maiorAB);
    
    return 0;
}