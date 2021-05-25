#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string1[20], string2[20];
    // int i;
    
    scanf("%s %s", string1, string2);
    
    // for(i = 0; string1[i] != '\0' && string2[i] != '\0'; i++){
    //     if(string1[i] != string2[i]){
    //         printf("DIFERENTES\n");
    //         return 0;
    //     }
    // }

    // printf(string1[i] == '\0' && string2[i] == '\0' ? "IGUAIS\n" : "DIFERENTES\n");
    
    // strcmp(string1, string2) --> STRing CoMPare
    // retorna 0, se as strings são iguais
    // retorna != 0, se as strings são diferentes

    printf(!strcmp(string1, string2) ? "IGUAIS\n" : "DIFERENTES\n");

    return 0;
}