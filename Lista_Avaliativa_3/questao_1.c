#include <stdio.h>
#include <string.h>

int num_Romanos(char representacaoRomano){
   
   switch (representacaoRomano)
   {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
   }
}

int convRomanos_Dec(char *romano){
    int div = 0;
    for (int i = 0; romano[i]; i++) {
        if (num_Romanos(romano[i]) < num_Romanos(romano[i + 1])) {
            div-= num_Romanos(romano[i]);
        } else {
            div+= num_Romanos(romano[i]);
        }
    }

    return div;
}

void convDec_Binario(int decimal, char binario[]){
    binario[0] = '\0';

   while (decimal > 0) {
        char digito[2];
        sprintf(digito, "%d", decimal % 2);
        strcat(binario, digito);
        decimal /= 2;
    }

    int tamanho = strlen(binario);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = binario[i];
        binario[i] = binario[tamanho - 1 - i];
        binario[tamanho - 1 - i] = temp;
    }
}

void convDec_Hexadecimal(int decimal, char hexadecimal[]){
   int i = 0, resto_div;
   hexadecimal[0] = '\0';
   
   while (decimal > 0) {
        resto_div = decimal % 16;
        char dig[2];
        if (resto_div < 10) {
            sprintf(dig,"%d",resto_div);
        } else {
             sprintf(dig, "%c", resto_div - 10 + 'a');
        }
        strcat(hexadecimal, dig);
        decimal = decimal / 16;
        i++;
    }
    int tamanho = strlen(hexadecimal);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[tamanho - 1 - i];
        hexadecimal[tamanho - 1 - i] = temp;
    }
}

int main(){
   char romano[15],binario[32], hexadecimal[100];
   int decimal;
   scanf("%s",romano);

   decimal = convRomanos_Dec(romano);
   convDec_Binario(decimal, binario);
   convDec_Hexadecimal(decimal,hexadecimal);

   printf("%s na base 2: %s\n",romano, binario);
   printf("%s na base 10: %d\n",romano, decimal);
   printf("%s na base 16: %s\n",romano, hexadecimal);
   return 0;
}