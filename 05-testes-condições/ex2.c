#include <stdio.h>
#include <stdlib.h>

int main(){
    int salario, gasto;

    scanf("%d %d", &salario, &gasto);
    
    if(gasto > salario){
        printf("Orçamento estourado\n");
    }
    
    else{
        printf("Gastos dentro do orçamento\n");
    }

    return 0;
}