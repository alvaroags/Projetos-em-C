#include <stdio.h>

int main(){
    int i, a, b, x=1;
    scanf("%d %d", &a,&b);
    for (i=0;i<b;i++){
        x = x*a;
    }
    printf("%d", x);
    return 0;
}