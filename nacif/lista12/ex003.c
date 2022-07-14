#include <stdio.h>
int main(){
    int aux, num[3], i, j;
    for (i=0;i<3;i++){
        scanf("%d", &num[i]);
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if(num[i]<num[j]){
                aux = num[j];
                num[j] = num[i];
                num[i] = aux;
            }
        }
    }
    for (i=0;i<3;i++){
        printf("%d ", num[i]);
    } 
}
