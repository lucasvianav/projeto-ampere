#include <stdio.h>
#include <stdlib.h>

int main(){
    int P1, P2, T1, T2, T3;

    scanf("%d %d %d %d %d", &P1, &P2, &T1, &T2, &T3);
    
    int MF = (2*P1 + 3*P2)/10 + (T1 + T2 + T3)/6;
    
    if(MF >= 5){
        printf("Aprovado\n");
    }
    
    else if(MF >= 3){
        printf("Recuperação\n");
    }

    else{
        printf("Reprovado\n");
    }

    // else{
    //     if(MF >= 3){
    //         printf("Recuperação\n");
    //     }

    //     else{
    //         printf("Reprovado\n");
    //     }
    // }

    return 0;
}