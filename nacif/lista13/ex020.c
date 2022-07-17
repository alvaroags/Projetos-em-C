#include <stdio.h>

int main(){
    int vet[5], i;
    for (i=0;i<5;i++)
        scanf("%d", &vet[i]);
    for (i=0;i<5;i++){
        if(div3(vet[i])==0)
            printf("%d = DIVISIVEL POR 3\n", vet[i]);
        else
            printf("%d = NAO DIVISIVEL POR 3\n", vet[i]);
    }
}
int div3(int num){
    return num%3;
}