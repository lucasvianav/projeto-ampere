#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void toCapsLock(char string[]){
    for(int i = 0; string[i] != '\0'; i++){
        // if(97 <= (int)string[i] && (int)string[i] <= 122){
        //     string[i] = (char)((int)string[i] - 32);
        // }

        // toupper(c) --> to uppercase
        // retornar c em caps-lock/caixa alta

        string[i] = toupper(string[i]);
    }
    
    printf("%s\n", string);
}

int main(){
    char string[20];
    
    scanf("%s", string);
    
    toCapsLock(string);

    return 0;
}