#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    scanf("%d", &n);

    if(n == 1){
        printf("Domingo\n");
    }
    
    else if(n == 2){
        printf("Segunda\n");
    }

    else if(n == 3){
        printf("Terça\n");
    }

    else if(n == 4){
        printf("Quarta\n");
    }

    else if(n == 5){
        printf("Quinta\n");
    }

    else if(n == 6){
        printf("Sexta\n");
    }

    else if(n == 7){
        printf("Sábado\n");
    }

    else{
        printf("Nenhum\n");       
    }

    return 0;
}