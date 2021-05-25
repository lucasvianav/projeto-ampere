#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int maior, menor;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b){
        if(a > c){
            maior = a;

            if(c > b){
                menor = b;
            }

            else{
                menor = c;
            }
        }
        
        else{
            maior = c;
            menor = b;
        }
    }

    else{
        if(b > c){
            maior = b;
            
            if(c > a){
                menor = a;
            }

            else{
                menor = c;
            }
        }

        else{
            maior = c;
            menor = a;
        }
    }

    printf("%d %d\n", menor, maior);

    return 0;
}