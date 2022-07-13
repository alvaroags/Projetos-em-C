#include <stdio.h>

int main(){
    int num,soma=0;
    while (num>=0)
    {
        scanf("%d", &num);
        if(num>=0)
            soma += num;
    }
    printf("%d", soma);
    return 0;
}