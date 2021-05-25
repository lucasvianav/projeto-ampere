#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    scanf("%d", &numero);

    printf("%d", 2*numero);

    if(numero > 0){
        printf(" positivo");
    }

    printf("\n");

    return 0;
}