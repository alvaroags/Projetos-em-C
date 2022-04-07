#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num[3][3], i, j, result=0, soma[24] = {0}, x=0;
    srand(time(NULL));
    /*for(j=0;j<4;j++){
        for(i=0;i<4;i++)
            num[j][i] = rand() % 100;
    }*/
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            scanf("%d", &num[j][i]);
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            printf("%2d ", num[j][i]);
        printf("\n");
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            soma[x] += num[j][i];
        x++;
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++)
            soma[x] += num[i][j];
        x++;
    }
    for(j=0;j<3;j++){
        soma[x] += num[j][j];
    }
    x++;
    i=0;
    for(j=2;j>=0;j--){
        soma[x] += num[j][i];
        i++;
    }
    for(i=0;i<7;i++){
        if(soma[i]==soma[i+1])
            result = 1;
        else
            result = 0;
    }
    if(result==1)
        printf("\nA MATRIX EH UM QUADRADO PERFEITO!");
    else    
        printf("\nA MATRIX NAO EH UM QUADRADO PERFEITO");
}