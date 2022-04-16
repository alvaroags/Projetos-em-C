#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double fibonacci(int num2){
    if(num2==1)
        return 0;
    else{
        if(num2==2)
            return 1;
        else
            return fibonacci(num2 - 1) + fibonacci(num2 - 2);
    }
}
int main(){
    int num2;
    printf("DIGITE UM NUMERO: ");
    scanf("%d", &num2);

    printf("soma: %.1lf", fibonacci(num2));

}
