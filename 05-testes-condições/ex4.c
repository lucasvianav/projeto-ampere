#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("1\n");
    }

    else{
        if(a == b || b == c || a == c){
            printf("2\n");
        }
        
        else{
            printf("3\n");
        }
    }

    return 0;
}