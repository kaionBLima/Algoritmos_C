#include <stdio.h>
#include <string.h>

int main() {

    int n1, n2, resultado, indice;
    char * resposta = (char *) malloc(sizeof(char) * 11);

    while (1) {
        
        scanf("%i %i ", &n1, &n2);
        
        if (n1 == 0 && n2 == 0) exit(0);
        
        resultado = n1 + n2;
        
        snprintf(resposta, 11, "%d", resultado);
        
        indice = 0;
        while (resposta[indice] != '\0') {
            if (resposta[indice] != '0')
                printf("%c", resposta[indice]);
                
            indice++;
        }
        
        printf("\n");
        
    }

    return 0;
}