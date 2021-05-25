#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[100];
    
    scanf("%s", string);
    
    // int i;
    // for(i = 0; string[i] != '\0'; i++){ }
    // printf("O tamanho da string é: %d\n", i);
    
    // strlen(string) --> STRing LENgth
    // retorna a quantidade de caracteres na string (não inclui o delimitador)
    
    int length = strlen(string);
    printf("O tamanho da string é: %d\n", length);

    return 0;
}