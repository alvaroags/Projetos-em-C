#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5], i;
    for (i=0;i<5;i++)
        scanf("%d", &vetor1[i]);
    for (i=0;i<5;i++){
        if(vetor1[i]<10)
            vetor2[i] = 1;
        else
            vetor2[i] = vetor1[i];
    }
    for (i=0;i<5;i++)
        printf("%d ", vetor1[i]);
    for (i=0;i<5;i++)
        printf("%d ", vetor2[i]);
    return 0;
}