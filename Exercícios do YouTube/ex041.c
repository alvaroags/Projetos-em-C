#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num[7][7], i, j, soma=0;
    srand(time(NULL));
    for(j=0;j<7;j++){
        for(i=0;i<7;i++)
            num[j][i]= rand() % 100;
    }
    for(j=0;j<7;j++){
        for(i=0;i<7;i++)
            printf("%2d ", num[j][i]);
        printf("\n");
    }
    j=0;
    for(i=6;i>=0;i--){
        printf("%d ", num[i][j]);
        j++;
    }
}