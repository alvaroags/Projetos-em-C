#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    for(i=0;i<=9999;i+=7){
        if (i==0) {
            printf("   1");
        }else{        
        printf("%4d ", i);
        }
    }
}