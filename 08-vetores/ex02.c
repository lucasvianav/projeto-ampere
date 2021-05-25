#include <stdio.h>
#include <stdlib.h>

int main(){
    // N --> número de voltas
    int N;
    scanf("%d", &N);

    // v --> vetor com duração de cada volta
    float v[N], total = 0;
    // float aux, total = 0;
    for(int i = 0; i < N; i++){
        scanf("%f", &v[i]);
        total += v[i];
        
        // scanf("%f", &aux);
        // total += aux;
    }
        
    
    float mean = total / N;
    
    printf("%f %f\n", total, mean);
    printf("Todos os elementos: ");
    for(int i = 0; i < N; i++){ printf("%f ", v[i]); }
    printf("\n");

    return 0;
}