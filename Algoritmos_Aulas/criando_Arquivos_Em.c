#include <stdio.h>

int main () {
    FILE *f; //Declarar arquivo
    f = fopen("teste.txt", "r"); //Arbertura do arquivo -> "Nome do arquivo", "Modo/chamada do que vai fazer no arquivo"
    //Tipos de modos: "r" = leitura. Arquivo deve existir// "w" = Escrita. Cria arquivo se não houver. Apga o arquivo se ele existir
    // "a" = Escrita. OS dados serão adicionados no fim do arquivo ("append").

    if (f == NULL) {
        printf("erro ao abrir o arquivo!");
        return 1;
    }
    fclose(f);


}