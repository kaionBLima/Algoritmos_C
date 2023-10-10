#include <stdio.h>

int main() {
    int nota1;
    int nota2;
    int nota3;
    int media;

    printf("Digite as 3 notas:\n");

    printf("Nota de aluno específico aqui: \n");
    printf("nota 1: \n");
    scanf("%d", &nota1);
    printf("nota 2: \n");
    scanf("%d", &nota2);
    printf("nota 3: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("media: %d\n", media);

    if (media == 8) {
        printf("parabén! Voce ganhou um bônus\n");
        media = media + 1;
    } 
    else if (media == 9) {
        printf("parabén! Voce ganhou um bônus\n");
        media = media + 1;
    }
    
    printf("media: %d\n", media);

    if (media < 7){
        printf("REPROVADO.\n");
    } else if (media > 8){ 
        printf("EXELENTE!\n");
    } else if (media > 9){
        printf("Tu é o bixao\n");
    } else {
        printf("APROVADO, PARABÉNS!\n");
    }

    return 0;
}