#include <stdio.h>

int main(){
    int pessoas, consultas, i, j, aux;
    while(scanf("%d %d", &pessoas, &consultas)!= EOF){
        int notas[pessoas], rank[consultas];
        for(i=0;i<pessoas;i++)
            scanf("%d", &notas[i]);
        for (i=0;i<consultas;i++){
            scanf("%d", &rank[i]);
        }
        for (i=0; i<pessoas;i++){
            for (j=0;j<pessoas;j++){
                if(notas[i]>notas[j]){
                    aux = notas[i];
                    notas[i] = notas[j];
                    notas[j] = aux;
                }
            }
        }
        for(i=0;i<consultas;i++)
            printf("%d\n", notas[rank[i]-1]);
    }
}