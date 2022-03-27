#include <stdio.h>
#include <stdlib.h>
int main(){
    int qt, i, j, idade, medIdade=0, qtIdade=0, qtAltura=0;
    float altura, medAltura=0.0;
    do{
        j=0;
        do{
            printf("INFORME QUANTOS ALUNOS SAO: ");
            scanf("%d", &qt);
        } while(qt<=1);
        for(i=1;i<=qt;i++){
            printf("\nALUNO %d\n", i);
            printf("INFORME A ALTURA DO ALUNO EM CENTIMETROS: ");
            scanf("%f", &altura);
            printf("INFORME A IDADE DO ALUNO: ");
            scanf("%d", &idade);
            if(altura<170){
                qtIdade++;
                medIdade +=idade;
            }
            if(idade>20){
                qtAltura++;
                medAltura +=altura;
            }
        }
        printf("\nIDADE MEDIA DOS ALUNOS COM MENOS DE 170cm DE ALTURA: %d", medIdade / qtIdade);
        printf("\nALTURA MEDIA DOS ALUNOS COM MAIS DE 20 ANOS DE IDADE: %.2f", medAltura / qtAltura);
        printf("\nDIGITE 1 PARA CONTINUAR: ");
        scanf("%d", &j);
        system("cls");
    } while(j==1);
}