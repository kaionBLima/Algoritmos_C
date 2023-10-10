#include <stdio.h>

int main (){
    int ano, restoDaDiv;
  
    scanf("%d", &ano);

    if(1800 <= ano <= 2022) {
        restoDaDiv = ano%4; //Copa do Mundo 

        if(ano >= 1930 && ano != 1942 && ano != 1946 && restoDaDiv == 2) {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
            
        }
        else if (ano >= 1896 && ano != 1916 && ano != 1940 && ano != 1944 && restoDaDiv == 0) {
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
        
        }
        else {
            printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
           
        }
    }

    else {
        printf("Ano inexistente na lista das Olimpiadas e Copas do Mundo\n");
    } 
   return 0;
}



