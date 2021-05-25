#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int main(){
    // Se quiséssemos receber a ordem da matriz
    // do usuário:
    // int DIM;
    // scanf("%d", &DIM);

    int A[DIM][DIM];
    int B[DIM][DIM];
    
    // Soma e produto, respectivamente
    int sum[DIM][DIM], prod[DIM][DIM];

    // Jeito alternativo: 
    // scanf("%d %d %d", &A[0][0], &A[0][1], &A[0][2]);
    // scanf("%d %d %d", &A[1][0], &A[1][1], &A[1][2]);
    // scanf("%d %d %d", &A[2][0], &A[2][1], &A[2][2]);
    
    // Soma usando Carga Inicial Automática
    // int sum[3][3] = { { A[0][0]+B[0][0], A[0][1]+B[0][1], A[0][2]+B[0][2] }, { A[1][0]+B[1][0], A[1][1]+B[1][1], A[1][2]+B[1][2]}, { A[2][0]+B[2][0], A[2][1]+B[2][1], A[2][2]+B[2][2]} };
    
    // Recebe os valores de A
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\n");

    // Recebe os valores de B
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            scanf("%d", &B[i][j]);
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    
    // Executa a multiplicação
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            prod[i][j] = 0;
            
            for(int k = 0; k < DIM; k++){
                prod[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Fórmula para cada elemento
    // prod[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0]
    
    
    printf("\nA matriz soma é: \n");
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("A matriz produto é: \n");
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}