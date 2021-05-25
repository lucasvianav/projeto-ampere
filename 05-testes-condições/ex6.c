#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario;
    float aumento;
    
    scanf("%f", &salario);

    if(salario > 1000){
        aumento = 0.05 * salario;
    }

    else{
        aumento = 0.07 * salario;
    }
    
    printf("%f\n", aumento);

    return 0;
}