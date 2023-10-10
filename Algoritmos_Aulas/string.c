#include <stdio.h>

int main (){
    //primeira forma de inicializar

    char string1[10] = {'a', 'b', 'c'};
    // se não usar o \0, pode ser que na memoria exista valores salvos
    // nas outras posições: ['a', 'b', 'c', '7', '*', '-', ...]

    char string2[10] = "def";

    // terceira forma de incializar, usando for 
    char string3[10];
    for(int pos = 0; pos < 3; pos++) {
        scanf("%c", &string1);
        scanf("%c", &string2);
    }

}