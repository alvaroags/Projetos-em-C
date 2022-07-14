#include <stdio.h>

int main(){
    int matrix[3][5], vetor[3], i, j, soma;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++)
            scanf("%d", &matrix[i][j]);
    }
    for (i=0;i<3;i++){
        soma=0;
        for (j=0;j<3;j++)
            soma+= matrix[i][j];
        vetor[i] = soma;
    }
    for (i=0;i<3;i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}