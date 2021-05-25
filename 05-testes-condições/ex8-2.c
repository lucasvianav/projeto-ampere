#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B;
    // float resultado;
    char OP;

    scanf("%f %c %f", &A, &OP, &B);
    
    switch(OP){
        case '+':
            printf("adição %f\n", A+B);
            break;
        case '-':
            printf("subtração %f\n", A-B);
            break;
        case '*':
            printf("multiplicação %f\n", A*B);
            break;
        case '/':
        case '%':
            printf("divisão %f\n", A/B);
            break;
    }
    
    // // se fosse pra imprimir só o resultado
    // printf("%f\n", resultado);

    // // se fosse pra imprimir o símbolo da operação
    // printf("%c %f\n", OP, resultado);

    return 0;
}
