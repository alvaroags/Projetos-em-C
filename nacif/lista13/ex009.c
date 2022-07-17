#include <stdio.h>

int negativo_Positivo (int);
int main(){
    int num, x;
    scanf("%d", &num);
    x = negativo_Positivo(num);
    if(x==1)
        printf("Numero positivo");
    else
        printf("Numero negativo");
}
int negativo_Positivo(int num){
    int x;
    if(num>=0)
        x = 1;
    else
        x = 0;
    return x;
}