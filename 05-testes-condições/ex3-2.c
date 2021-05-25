
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int maior, menor;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b && a > c){
        maior = a;
        
        if(b < c){
            menor = b;
        }

        else{
            menor = c;
        }
    }

    else{
        if(a < b && a < c){
            menor = a;
            
            if(b > c){
                maior = b;
            }

            else{
                maior = c;
            }
        }

        else{
            if(b > c){
                maior = b;
                menor = c;
            }

            else{
                maior = c;
                menor = b;
            }
        }
    }

    printf("%d %d\n", menor, maior);

    return 0;
}