#include <stdio.h>
int main(){
    int i, nota, vetor[7]={100,50,20,10,5,2,1};
    scanf("%d", &nota);
    printf("%d\n", nota);
    for(i=0;i<7;i++){
        printf("%d notas(s) de R$ %d,00\n", nota/vetor[i], vetor[i]);
        nota = nota%vetor[i];
    }
}