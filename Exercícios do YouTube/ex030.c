#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat[3][3], i, j;
    srand(time(NULL));
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat[j][i] = rand() % 1000;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d ", mat[j][i]);
        }
        printf("\n");
    }
    
}