#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


struct Tuple{
    char dia[20];
    int ultimo_digito;
};

int validacaoPlaca(char *placa){  
   if (strlen(placa)==8){
      for (int i = 0; i < 3; i++){
        if (!isalpha(placa[i])){
            return 0;
        }
      }
      if (placa[3] != '-' || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]) || !isdigit(placa[7])){
        return 0;
      } 
   }
   else if (strlen(placa)==7){
      for (int i = 0; i <3; i++){
         if (!isalpha(placa[i])){
           return 0;
         }
      }
      if (!isdigit(placa[3]) || !isalpha(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6])){
        return 0;
      }
   }
   else{
      return 0;
   }
   return 1;
}


int validacaoDia(char dia[20]){

    char comparar_dia[7][20] = {"SABADO", "DOMINGO", "SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA"};
        
    for (int i = 0; i < 7; i++) {
        if (strcmp(dia, comparar_dia[i]) == 0) {
            return 1;
        }
    }
    return 0;
}


int organizacao_CirculaDia(struct Tuple entrada){
    int regras = 0;

    regras = (strcmp(entrada.dia, "SEGUNDA-FEIRA") == 0 && (entrada.ultimo_digito == '0' || entrada.ultimo_digito == '1')) ||
                (strcmp(entrada.dia, "TERCA-FEIRA") == 0 && (entrada.ultimo_digito == '2' || entrada.ultimo_digito == '3')) ||
                (strcmp(entrada.dia, "QUARTA-FEIRA") == 0 && (entrada.ultimo_digito == '4' || entrada.ultimo_digito == '5')) ||
                (strcmp(entrada.dia, "QUINTA-FEIRA") == 0 && (entrada.ultimo_digito == '6' || entrada.ultimo_digito == '7')) ||
                (strcmp(entrada.dia, "SEXTA-FEIRA") == 0 && (entrada.ultimo_digito == '8' || entrada.ultimo_digito == '9'));
    return !regras; 
}

void lower(char dia[]){
    for(int i= 0; dia[i]; i++){
        dia[i] = tolower(dia[i]);
    }
}

int main(){
    char placa[9], dia[20];
    int valida_dia, valida_placa;
    
    scanf("%s", &placa);
    
    char ultimo_digito = placa[strlen(placa) - 1];
    
    scanf("%s", &dia);

    struct Tuple entrada;
    strcpy(entrada.dia, dia);
    entrada.ultimo_digito = ultimo_digito;


    valida_dia = validacaoDia(entrada.dia);
    valida_placa = validacaoPlaca(placa);

    if(valida_placa == 0){
        printf("Placa invalida\n");
        if(valida_dia == 0){
            printf("Dia da semana invalido\n");
        }  
    }
    else{
        if(valida_dia == 0){
            printf("Dia da semana invalido\n");
        }
        else{
            lower(dia);
            
            if(strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0){
                printf("Nao ha proibicao no fim de semana\n");
            }
            else if(organizacao_CirculaDia(entrada)){              
                printf("%s pode circular %s\n", placa, dia);
            }
            else{
                printf("%s nao pode circular %s\n", placa, dia);
            }

        }
    }

    return 0;
}