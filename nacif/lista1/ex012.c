#include <stdio.h>

int main(){
    int i, vetor1[5], vetor2[5];
    for (i=0;i<5;i++)
        scanf("%d", &vetor1[i]);
    for (i=0;i<5;i++)
        vetor2[4-i] = vetor1[i];
    for (i=0;i<5;i++)
        printf("%d ", vetor1[i]); 
    for (i=0;i<5;i++)
        printf("%d ", vetor2[i]);
    return 0;
}