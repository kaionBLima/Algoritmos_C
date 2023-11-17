#include <stdio.h>
#include <string.h>

int numerosRomanos (char represRomano) {
    switch (represRomano){
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    
    default:
    return 0;
    }
}

    int convRomano_Decimal (char *roma) {
        int retorno = 0;
        for (int i = 0; roma[i]; i++) {
            if (numerosRomanos(roma[i]) < numerosRomanos(roma[i + 1])){
                retorno = retorno - numerosRomanos(roma[i]);
            } else {
                retorno += numerosRomanos(roma[i]);
            }
        }
        return retorno;
}

void conv_binario(int decimal, char bin[]) {
   bin[0] = '\0';

   while (decimal > 0) {
        char digito[2];
        sprintf(digito, "%d", decimal % 2);
        strcat(bin, digito);
        decimal /= 2;
    }

    int tamanho = strlen(bin);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = bin[i];
        bin[i] = bin[tamanho - 1 - i];
        bin[tamanho - 1 - i] = temp;
    }
}

    void conv_Hexadecimal (int decimal, char hexadec[]) {
        int i = 0, div;
   if (decimal == 0) {
        printf("0\n");
        return;
    }
   while (decimal > 0) {
        div = decimal % 16;
        if (div < 10) {
            hexadec[i] = div + '0';
        } else {
            hexadec[i] = div - 10 + 'a';
        }

        decimal /= 16;
        i++;
    }
}

    int main () {
        char romano[20], binario[32], hexadecimal[100];
        int dec;
        scanf("%s", romano);

        dec = convRomano_Decimal(romano);
        conv_binario(dec, binario);
        conv_Hexadecimal(dec,hexadecimal);

        printf("%s na base 2: %s\n", romano, binario);
        printf("%s na base 10: %d\n", romano, dec);
        printf("%s na base 16: %s\n", romano, hexadecimal);

        return 0;
    }