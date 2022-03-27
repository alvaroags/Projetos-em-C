//exercicio que calcula a media dos salarios e imprime o maior e o menor
#include <stdio.h>
#include<stdlib.h>
int main(){
    int i, x, qt;
    do{  
        float salario=0.0, maiorSalario=0, menorSalario=0, media=0;
        printf("INFORME A QUANTIDADE DE USUARIOS: ");
        scanf("%d", &qt);
            while(qt<=1){
                printf("\nINFORME UMA QUANTIDADE DE FUNCIONARIOS MAIOR: ");
                scanf("%d", &qt);
            }
        for(i=1;i<=qt;i++){
            printf("\nFUNCIONARIO %d", i);
            printf("\nINFORME O SALARIO: R$ ");
            scanf("%f", &salario);
            if(i==1){
                menorSalario=salario;
            }
            if(salario>maiorSalario){
                maiorSalario = salario;
            }
            if(salario<menorSalario){
                menorSalario = salario;
            }
            media += salario;
        }
        printf("\nMEDIA DOS SALARIOS: R$ %.2f", media / qt);
        printf("\nMAIOR SALARIO: R$ %.2f", maiorSalario);
        printf("\nMENOR SALARIO: R$ %.2f", menorSalario);
        printf("\nDIGITE 1 PARA CONTINUAR: ");
        scanf("%d", &x);
        system("cls");
    } while(x==1);
}