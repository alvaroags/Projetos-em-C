#include <stdio.h>

int verificaPar(int);

int main(){
    int num, x;
    scanf("%d", &num);
    x = verificaPar(num);
    if (x == 1)
        printf("Numero impar");
    else
        printf("Numero par");
}
int verificaPar(int num){
    return num % 2;
}