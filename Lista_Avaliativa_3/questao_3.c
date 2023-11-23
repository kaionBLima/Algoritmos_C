#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validacao_Placa(char *placa) {
   if (strlen(placa) == 8 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
        placa[3] == '-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
        return 1;
    }

    // Verifica o formato novo (LLLNLNN)
    if (strlen(placa) == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
        isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])) {
        return 1;
    }
}

int validacao_Dia(char *dia) {
    if (strcmp(dia, "SEGUNDA-FEIRA") == 0 || strcmp(dia, "TERCA-FEIRA") == 0 || strcmp(dia, "QUARTA-FEIRA") == 0 ||
        strcmp(dia, "QUINTA-FEIRA") == 0 || strcmp(dia, "SEXTA-FEIRA") == 0 || strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char placa[10];
    char dia[20];

    fgets(placa, sizeof(placa), stdin);
    placa[strcspn(placa, "\n")] = '\0'; // Remover o caractere de nova linha

    fgets(dia, sizeof(dia), stdin);
    dia[strcspn(dia, "\n")] = '\0';

    // Validar a placa e o dia da semana
    if (!validacao_Placa(placa)) {
        printf("Placa invalida\n");
        return 0;
    }

    if (!validacao_Dia(dia)) {
        printf("Dia da semana invalido\n");
        return 0;
    }

    // Verificar se a placa pode circular no dia informado
    int ultimoDigito = placa[strlen(placa) - 1] - '0';
    switch (dia[0]) {
        case 'D': //Sabado ou domingo ou outro    
            if (strcmp(dia, "SABADO")==0 || strcmp(dia, "DOMINGO") == 0 ) {
                printf("Nao ha proibicao no final de semana\n");
            }
            break;
        case 'S': //segunda
            if (ultimoDigito == 0 || ultimoDigito == 1 && strcmp(dia, "SEGUNDA-FEIRA")==0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else {
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case 'T': //terça
            if (ultimoDigito == 2 || ultimoDigito == 3 && strcmp(dia, "TERCA-FEIRA")==0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else {
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case 'Q': //quarta
            if (ultimoDigito == 4 || ultimoDigito == 5 && strcmp(dia, "QUARTA-FEIRA")==0 ) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else {
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case 'I': //quinta
            if (ultimoDigito == 6 || ultimoDigito == 7 && strcmp(dia, "QUINTA-FEIRA")==0 ) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else {
                printf("%s pode circular %s\n", placa, dia);
            }
            break;
        case 'F': //sexta
            if (ultimoDigito == 8 || ultimoDigito == 9 && strcmp(dia, "SEXTA-FEIRA")==0) {
                printf("%s nao pode circular %s\n", placa, dia);
            } else {
                printf("%s pode circular %s\n", placa, dia);
            }
            break;

        default:
            printf("Dia da semana invalido\n");
            }
    return 0;
    }


