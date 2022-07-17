#include <stdio.h>
#include <stdlib.h>

void ordena(int vetor[]);

int main(){
    int vetor[10];
    for(int a=0; a<10;a++){
        scanf("%d", &vetor[a]);
    }
    ordena(vetor);
    for(int a=0; a<10;a++){
        printf("%d ", vetor[a]);
    }
    return 0;
}
void ordena(int vetor[]){
    int b, t = 1, aux;
    while(t != 0){
        t = 0;
        for(b=0;b<9;b++){
            if(vetor[b]>vetor[(b+1)]){
                aux = vetor[b];
                vetor[b] = vetor[(b+1)];
                vetor[(b+1)] = aux;
                t = 1;
            }
        }
    }
}