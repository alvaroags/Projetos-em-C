#include <stdio.h>
#include <stdlib.h>

void binario(int num){
    if(num==0)
        printf("%d", num);
    else{
        binario(num/2);
        printf("%d", num%2);
    }
}
int main(){
    int num;
    printf("DIGITE UM NUMERO\n");
    scanf("%d", &num);
    binario(num);

    return 0;
}