#include <stdio.h>

int main(){
    int i, n, s=1;
    scanf("%d", &n);
    for (i=0;i<n;i++){
        if(i%3==0)
            printf("%d ", s++);
        else
            printf("%d ", s+2);
    }
    return 0;
}