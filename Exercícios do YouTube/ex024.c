//exercicio de multiplicação sem utilizar o *
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, num1, num2, result, j;
    do{
        result=0;
        printf("DIGITE DOIS VALORES: ");
        scanf("%d%d", &num1, &num2);
        for(i=1;i<=num2;i++){
            result += num1;
        }
        printf("RESULTADO: %d", result);
        printf("\nPARA CONTINUAR DIGITE 1: ");
        scanf("%d", &j);
        system("cls");
    } while(j==1);
}