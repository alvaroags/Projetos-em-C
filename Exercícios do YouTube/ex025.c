//exercicio de contagem de numeros positivos e negativos
#include <stdio.h>
int main(){
    double total = 1, soma;
    int i;
    for(i=0;i<64;i++){
        soma = total;
        total *=2;
    }
    printf("%.0lf", soma);
}