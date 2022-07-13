#include <stdio.h>

int main(){
    float soma=0, i, j;
    for (i=37;i>0;i--){
        soma += (i*(i+1)) / (38 - i);
    }
    printf("%.2f", soma);
    return 0;
}