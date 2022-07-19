#include <stdio.h>

int main(){
    int i, qt;
    scanf("%d", &qt);
    for (i=1;i<=qt;i++){
        if(i%2==0)
            printf("%d^2 = %d\n", i, i*i);
    }
}