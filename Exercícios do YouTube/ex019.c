#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, i, soma, j;
    do{
        j=0;
        soma=0;
        printf("DIGITE UM NUMERO: ");
        scanf("%d", &num);
        while(num<=0){
            printf("\nDIGITE UM NUMERO MAIOR QUE 0: ");
            scanf("%d", &num);
            printf("\n");
        }
        for(i=1;i<=num;i++)
            soma +=i;
        printf("A SOMA DOS NUMEROS E: %d\n", soma);
        printf("SE DESEJA CONTINUAR DIGITE 1: ");
        scanf("%d", &j);
        system("cls");
    } while(j==1);
}