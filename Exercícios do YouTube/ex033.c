//exercicio no qual existe a inversao na ordem dos vetores
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n[20], num[20], i, j;
    srand(time(NULL));
    for(i=0;i<20;i++){
        n[i] = rand() % 100;
    }
    for(i=0;i<20;i++){
        printf("%2d ", n[i]);
    }
    j=0;
    for(i=19;i>=0;i--){
        num[j] = n[i];
        j++; 
    }
    printf("\n\n");
    for(j=0;j<20;j++){
        printf("%2d ", num[j]);
    }
}
