#include <stdio.h>
#include <stdlib.h>

#define AFAVOR 1
#define CONTRA 0

int main(){
    int noCandidatos, noEleitores;
    
    scanf("%d %d", &noCandidatos, &noEleitores);
        
    // int votos[noEleitores][noCandidatos];
    int relatorio[noCandidatos];
    int aux;
    
    // alternativa: memset
    for(int i = 0; i < noCandidatos; i++){ relatorio[i] = 0; }
    
    for(int i = 0; i < noEleitores; i++){
        for(int j = 0; j < noCandidatos; j++){
            scanf("%d", &aux);
            if(aux == AFAVOR){ relatorio[j]++; }
            
            // scanf("%d", &votos[i][j]);
        }
    }
    
    // for(int i = 0; i < noEleitores; i++){
    //     for(int j = 0; j < noCandidatos; j++){
    //         if(votos[i][j] == AFAVOR){ relatorio[j]++; }
    //     }
    // }
    
    printf("\n");
    for(int i = 0; i < noCandidatos; i++){
        printf("Candidato %d: %d votos\n", i+1, relatorio[i]);
    }

    return 0;
}