#include <stdio.h>

int main(){
    int i;
    for (i=1;i<=500;i++){
        if(i%5==0 || i==1)
            printf("%d ", i);
    }
    return 0;
}