//exercicio soma de 2 vetores em um terceiro
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num1[25], num2[25], num3[25], i;
    srand(time(NULL));
    for(i=0;i<25;i++){
        num1[i] = rand() % 100;
        num2[i] = rand() % 100;
    }
    for(i=0;i<25;i++){
        num3[i] = num1[i] + num2[i];
        printf("%2d + %2d = %3d\n", num1[i], num2[i], num3[i]);
    }
}