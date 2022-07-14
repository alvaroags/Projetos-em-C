#include <stdio.h>

int main(){
    int j, i, matrix[3][3];
    for (i=0;i<3;i++){
        for (j=0;j<3;j++)
            scanf("%d", &matrix[i][j]);
    }
    for (i=0;i<3;i++)
        printf("%d ", matrix[i][i]);
    return 0;
}