
#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario;
    
    scanf("%f", &salario);
    
    printf("%f\n", (salario > 1000) ? 0.05 * salario : 0.07 * salario);

    return 0;
}