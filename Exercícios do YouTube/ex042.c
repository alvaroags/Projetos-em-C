#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num[4][3], num2[3][4], i, j;
    srand(time(NULL));
    for(j=0;j<4;j++){
        for(i=0;i<3;i++)
            num[j][i] = rand() % 100;
    }
    for(j=0;j<4;j++){
        for(i=0;i<3;i++){
            num2[i][j] = num[j][i];
        }
    }
    for(j=0;j<4;j++){
        for(i=0;i<3;i++)
            printf("%2d ", num[j][i]);
        printf("\n");
    }
    printf("\n\n");
    for(j=0;j<3;j++){
        for(i=0;i<4;i++)
            printf("%2d ", num2[j][i]);
        printf("\n");
    }
}