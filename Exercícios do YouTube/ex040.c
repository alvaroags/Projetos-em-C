#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num[5][5], i, j, soma=0;
    srand(time(NULL));
    for(j=0;j<5;j++){
        for(i=0;i<5;i++)
            num[j][i]= rand() % 100;
    }
    for(j=0;j<5;j++){
        for(i=0;i<5;i++)
            printf("%2d ", num[j][i]);
        printf("\n");
    }
    for(i=0;i<5;i++)
        soma+= num[i][i];
    printf("%d", soma);
}