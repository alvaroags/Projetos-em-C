//exercicio que pula a sequencia j e i
#include <stdio.h>
#include <stdlib.h>
int main(){
    int j=7,i,k;
    for(i=1;i<=9;i+=2){
        for(k=1;k<=3;k++){
            printf("I=%d J=%d\n", i, j--);
        }
        j+=5;
    }
}