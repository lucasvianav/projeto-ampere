#include <stdio.h>
#include <stdlib.h>

// quantidade de gramas
#define EXERCICIO 5 // perde quando se exercita
#define COME 3 // ganha quando come

// meta de perda de peso
#define META 30 //

int main(){
    int exercitou; // número de vezes que o gato se exercitou
    int comeu; // número de vezes que o gato comeu
    
    scanf("%d %d", &exercitou, &comeu);
    
    // quantidade de gramas que o gato ganhou na semana
    int pesoPerdido = exercitou*EXERCICIO - comeu*COME;
    
    printf((pesoPerdido >= META) ? "P\n" : ((pesoPerdido >= 0) ? "B\n" : "R\n"));

    // if(pesoPerdido >= META){
    //     printf("P\n");
    // }

    // else if(pesoPerdido >= 0){
    //     printf("B\n");
    // }

    // else{
    //     printf("R\n");
    // }

    return 0;
}