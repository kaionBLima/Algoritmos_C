#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char *placa) {
    // Verifica se a placa está no formato antigo (LLL-NNNN) ou no formato novo (LLLNLNN)
    int comprimento = strlen(placa);
    if ((comprimento == 8 && placa[3] == '-') || (comprimento == 7 && isalpha(placa[6]) && isdigit(placa[5]))) {
        return 1; // Placa válida
    } else {
        return 0; // Placa inválida
    }
}

int validarDia(char *dia) {
    // Verifica se o dia da semana está no formato adequado
    if (strcmp(dia, "SEGUNDA-FEIRA") == 0 || strcmp(dia, "TERCA-FEIRA") == 0 || strcmp(dia, "QUARTA-FEIRA") == 0 ||
        strcmp(dia, "QUINTA-FEIRA") == 0 || strcmp(dia, "SEXTA-FEIRA") == 0 || strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0) {
        return 1; // Dia válido
    } else {
        return 0; // Dia inválido
    }
}

int main() {
    char placa[10];
    char dia[20];

    // Entrada da placa
    fgets(placa, sizeof(placa), stdin);
    placa[strcspn(placa, "\n")] = '\0'; // Remover o caractere de nova linha

    // Entrada do dia da semana
    fgets(dia, sizeof(dia), stdin);
    dia[strcspn(dia, "\n")] = '\0'; // Remover o caractere de nova linha

    // Validar a placa e o dia da semana
    if (!validarPlaca(placa)) {
        printf("Placa invalida\n");
        return 0;
    }

    if (!validarDia(dia)) {
        printf("Dia da semana invalido\n");
        return 0;
    }

    // Verificar se a placa pode circular no dia informado
    int ultimoDigito = placa[strlen(placa) - 1] - '0';
    switch (dia[0]) {
        case 'Z': //organizar
            printf("Nao ha proibicao no fim de semana\n");
            break;
        case 'D': //segunda
            if (ultimoDigito == 0 || ultimoDigito == 1) {
                printf(" Nao pode circular\n");
            } else {
                printf("%s pode circular\n", placa);
            }
            break;
        case 'T': //terça
            if (ultimoDigito == 2 || ultimoDigito == 3) {
                printf("Nao pode circular\n");
            } else {
                printf("Pode circular\n");
            }
            break;
        case 'W': //Quarta
            if (ultimoDigito == 4 || ultimoDigito == 5) {
                printf("Nao pode circular\n");
            } else {
                printf("Pode circular\n");
            }
            break;
        case 'Q': //Quinta
            if (ultimoDigito == 6 || ultimoDigito == 7) {
                printf("Nao pode circular\n");
            } else {
                printf("Pode circular\n");
            }
            break;
        case 'F': //Sexta
            if (ultimoDigito == 8 || ultimoDigito == 9) {
                printf("Nao pode circular\n");
            } else {
                printf("Pode circular\n");
            }
            break;
        case 'O': //outros
            if ( dia == 'SABADO' || 'DOMINGO' /*ultimoDigito == 0 || ultimoDigito == 1 || ultimoDigito == 2 || ultimoDigito == 3 || ultimoDigito == 4 || ultimoDigito == 5 ||
            ultimoDigito == 6 || ultimoDigito == 7 || ultimoDigito == 8 || ultimoDigito == 9*/) {
                printf("Nao ha proibicao no final de semana\n");
            }
            break;    
        default:
            printf("Dia da semana invalido\n");
    }

    return 0;
}
