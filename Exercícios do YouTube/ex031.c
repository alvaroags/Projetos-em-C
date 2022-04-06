#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1[3], num2[3], i;
    for(i=0;i<3;i++){
        printf("DIGITE UM VALOR PARA O NUMERO %d: ", i+1);
        scanf("%d", &num1[i]);
        num2[i] = num1[i] * num1[i];
    }
    for(i=0;i<3;i++){
        printf("%d = %d\n", num1[i], num2[i]);
    }
}