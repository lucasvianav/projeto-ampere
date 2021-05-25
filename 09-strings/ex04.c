#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string1[20], string2[20];
    
    scanf("%s", string1);

    // for(int i = 0; ; i++){
    //     string2[i] = string1[i];
    //     if(string2[i] == '\0'){ break; }
    // }
    
    // strcpy(destino, origem) --> STRing CoPY
    // vai copiar origem para destino
    
    strcpy(string2, string1);

    printf("string1: %s\nstring2: %s\n", string1, string2);

    return 0;
}