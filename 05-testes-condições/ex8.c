#include <stdio.h>
#include <stdlib.h>

int main(){
    float A, B;
    // float resultado;
    char OP;

    scanf("%f %c %f", &A, &OP, &B);
    
    if(OP == '+'){
        // resultado = A + B;
        printf("adição %f\n", A+B);
    }

    else if(OP == '-'){
        // resultado = A - B;
        printf("subtração %f\n", A-B);
    }

    else if(OP == '*'){
        // resultado = A * B;
        printf("multiplicação %f\n", A*B);
    }

    else if(OP == '/' || OP == '%'){
        // resultado = A / B;
        printf("divisão %f\n", A/B);
    }

    else{
        return 1;
    }
    
    // // se fosse pra imprimir só o resultado
    // printf("%f\n", resultado);

    // // se fosse pra imprimir o símbolo da operação
    // printf("%c %f\n", OP, resultado);

    return 0;
}