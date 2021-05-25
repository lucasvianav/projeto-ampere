#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string1[20], string2[20], concat[40] = "\0";
    int concat_tamanho = 0;

    scanf("%s %s", string1, string2);
    
    // o intuitivo seria:
    // concat = string1 + string2;
    // não funciona em C

    // for(int i = 0; string1[i] != '\0'; i++, concat_tamanho++){ concat[concat_tamanho] = string1[i]; }
    // for(int i = 0; string2[i] != '\0'; i++, concat_tamanho++){ concat[concat_tamanho] = string2[i]; }
    // concat[concat_tamanho++] = '\0';
    
    // strcat(destino, origem) --> STRing conCAT
    // vai fazer como se fosse destino = destino + origem
    // ou seja, destino vai ser a concatenação entre destino e origem, nessa ordem
    
    strcat(concat, string1);
    strcat(concat, string2);
    
    printf("string1: %s\nstring2: %s\nconcat: %s\n", string1, string2, concat);

    return 0;
}