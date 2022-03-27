#include <stdio.h>
#include <stdlib.h>
int main(){
    int id = 0, i, j=1;
    printf("IMPRESSAO DA SOMA DOS NUMEROS IMPARES DE 1 A 1000 ");
        for(i=1;i<=1000;i+=2){
            id += i;
        }
        printf("\n%d ", id);
}