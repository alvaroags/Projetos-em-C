#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fatorial(int num){
    if(num==1 || num==0)
        return 1;
    else
        return num * fatorial(num - 1);
}
int main(){
    int num;
    printf("DIGITE UM NUMERO ");
    scanf("%d", &num);
    printf("FATORIAL DE %d: %d", num, fatorial(num));
}