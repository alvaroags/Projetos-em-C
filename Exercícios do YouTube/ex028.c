//exercicio que o usuario define a sequencia e o numero de colunas
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y, cont=0, i;
    printf("DIGITE O VALOR DE X E DE Y: ");
    scanf("%d%d", &x, &y);
    for(i=1;i<=y;i++){
        printf("%3d ", i);
        cont++;
        if(cont==x){
            cont=0;
            printf("\n");
        }
    }
}