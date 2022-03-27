//exercicio da poupança que vai acumulando dinheiro
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    float soma=0.01;
    for(i=1;i<30;i++)
        soma = soma * 2;
    printf("%.2f", soma);
}