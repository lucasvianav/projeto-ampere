#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, x;
    
    scanf("%d %d %d %d", &a, &b, &c, &x);

    // switch(x){
    //     case a:
    //     case b:
    //     case c:
    //     default:
    // }

    if(x == a){
        printf("um\n");
    }

    else if(x == b){
        printf("dois\n");
    }

    else if(x == c){
        printf("três\n");
    }

    else{
        printf("nenhum\n");
    }

    return 0;
}