//exercicio que apresenta o quadrado dos numeros pares ate o valor que a pessoa digitou
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, num;
    printf("DIGITE UM NUMERO: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            printf("%d = %d\n", i, i*i);
        }
    }
}