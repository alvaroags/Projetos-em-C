//exercicio no qual se usa um vetor e outro com o quadrado do primeiro

#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1[10], num2[10], i;
    for(i=0;i<10;i++){
        printf("DIGITE UM VALOR PARA O NUMERO %d: ", i+1);
        scanf("%d", &num1[i]);
        num2[i] = num1[i] * num1[i];
    }
    for(i=0;i<10;i++){
        printf("%d = %d\n", num1[i], num2[i]);
    }
}