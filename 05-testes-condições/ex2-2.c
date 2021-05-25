
#include <stdio.h>
#include <stdlib.h>

int main(){
    int salario, gasto;

    scanf("%d %d", &salario, &gasto);
    
    // gasto > salario ? printf("Orçamento estourado\n") : printf("Gastos dentro do orçamento\n");
    printf(gasto > salario ? "Orçamento estourado\n" : "Gastos dentro do orçamento\n");

    return 0;
}