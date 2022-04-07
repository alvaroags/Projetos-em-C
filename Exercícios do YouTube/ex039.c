#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j;
    srand(time(NULL));
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            mat1[j][i] = rand() % 100;
            mat2[j][i] = rand() % 100;
        }
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            mat3[j][i] = mat1[j][i] + mat2[j][i];
    }
    printf("MATRIX 1\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            printf("%2d ", mat1[j][i]);
        printf("\n");
}
    printf("\nMATRIX 2\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            printf("%2d ", mat2[j][i]);
        printf("\n");
}
    printf("\nMATRIX 3\n");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            printf("%3d ", mat3[j][i]);
        printf("\n");
}
}