#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i, j, num[5][7], somaL[5],somaC[7];
    srand(time(NULL));
    for(j=0;j<5;j++){
        for(i=0;i<7;i++)
            num[j][i] = rand() % 100;
    }
    for(j=0;j<5;j++){
        for(i=0;i<7;i++)
            printf("%2d ", num[j][i]);
        printf("\n");
    }
    for(j=0;j<5;j++){
        somaL[j] = 0;
        for(i=0;i<7;i++)
            somaL[j]+= num[j][i];
    }
    for(i=0;i<7;i++){
        somaC[i] = 0;
        for(j=0;j<5;j++)
            somaC[i]+= num[j][i];
    }
    for(j=0;j<5;j++)
        printf("Soma da linha %d: %d\n", j+1, somaL[j]);
    for(j=0;j<7;j++)
        printf("Soma da coluna %d: %d\n", j+1, somaC[j]);
    
    
}