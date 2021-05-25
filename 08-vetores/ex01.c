#include <stdio.h>
#include <stdlib.h>

int main(){
    int v1[3], v2[3];
    // int result[3];

    // x1 y1 z1
    scanf("%d %d %d", &v1[0], &v1[1], &v1[2]);
    
    // x2 y2 z2
    scanf("%d %d %d", &v2[0], &v2[1], &v2[2]);
    
    // result[0] = v1[0] + v2[0];
    // result[1] = v1[1] + v2[1];
    // result[2] = v1[2] + v2[2];
    int result[] = { v1[0] + v2[0], v1[1] + v2[1], v1[2] + v2[2] };
    
    printf("(%d, %d, %d) + (%d, %d, %d) = (%d, %d, %d)\n", v1[0], v1[1], v1[2], v2[0], v2[1], v2[2], result[0], result[1], result[2]);

    return 0;
}