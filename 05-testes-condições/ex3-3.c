#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d %d\n", (a < b && a < c) ? a : (b < c ? b : c), (a > b && a > c) ? a : (b > c ? b : c));

    return 0;
}