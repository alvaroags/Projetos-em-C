//exercicio de calculo de tempo para ver em quanto tempo um numero chega a ser maior que o outro
#include <stdio.h>
#include <stdlib.h>
int main(){
    int chico=150, ze=110, cont=0;
    while(chico>=ze){
        chico +=2;
        ze +=3;
        cont++;
    }
    printf("%d", cont);
}