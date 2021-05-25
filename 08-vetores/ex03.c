#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x;
    
    // quantidade de vezes que x aparece
    // no vetor original
    int counter = 0;
    
    // variável auxiliar
    int tmp;
    
    // índice do menor elemento
    int lower;

    // recebe os inputs do usuário
    scanf("%d", &n);

    int original[n];
    for(int i = 0; i < n; i++){ scanf("%d", &original[i]); }

    // outras soluções (item b):
    // int inverso[n];
    // for(int i = 0; i < n; i++){ inverso[i] = original[n-1-i]; }
    // for(int i = 0; i < n; i++){ 
    //     scanf("%d", &original[i]); 
    //     inverso[n-1-i] = original[i];
    // }

    scanf("%d", &x);
    
    // counter += 0  --->  counter = counter + 0
    // counter += 1  --->  counter = counter + 1
    for(int i = 0; i < n; i++){ counter += (original[i] == x ? 1 : 0); }
    
    // outra solução (item a):
    // for(int i = 0; i < n; i++){
    //     if(x == original[i]){ counter++; }
    // }

    // resultado item a
    printf("O número \"%d\" apareceu %d vezes na sequência.\n", x, counter);
    
    // resultado item b
    printf("A sequência inversa é: ");
    for(int i = n-1; i >= 0; i--){ printf("%d ", original[i]); }
    printf("\n");

    // outras solução (item b):  
    // for(int i = 0; i < n; i++){ printf("%d ", inverso[i]); }
    // printf("\n");

    for(int i = 0; i < n; i++){
        lower = i;

        for(int j = i; j < n; j++){
            if(original[j] < original[lower]){ lower = j; }
        }
        
        tmp = original[i];
        original[i] = original[lower];
        original[lower] = tmp;
    }

    // resultado do item c
    printf("A sequência em ordem crescente é: ");
    for(int i = 0; i < n; i++){ printf("%d ", original[i]); }
    printf("\n");

    return 0;
}