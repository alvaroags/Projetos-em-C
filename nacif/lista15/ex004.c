#include <stdio.h>
int main(){
    int num=100;
    impar(num);
}
impar(int num){
    if (num<1)
        return 1;
    else{
        impar(num-1);
        if(num%2!=0)
            printf("%d ", num);
    }
}