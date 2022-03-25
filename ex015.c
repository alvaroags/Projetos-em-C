#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=1;
    float nota1, nota2, media;  
    while(i==1){  
        printf("\tCALCULO DE MEDIA DAS NOTAS");
        printf("\n\nDIGITE A NOTA 1: ");
        scanf("%f", &nota1);
        while(nota1<0 || nota1>10){
            system("cls");
            printf("\tCALCULO DE MEDIA DAS NOTAS");
            printf("\n\nNOTA INVALIDA!\nDIGITE UMA NOTA VALIDA: ");
            scanf("%f", &nota1);
        }
        system("cls");
        printf("\tCALCULO DE MEDIA DAS NOTAS");
        printf("\n\nDIGITE A NOTA 2: ");
        scanf("%f", &nota2);
        while(nota2<0 || nota2>10){
            system("cls");
            printf("\tCALCULO DE MEDIA DAS NOTAS");
            printf("\n\nNOTA INVALIDA!\nDIGITE UMA NOTA VALIDA: ");
            scanf("%f", &nota2);
        }
        system("cls");
        media = (nota1 + nota2) / 2;
        printf("\tCALCULO DE MEDIA DAS NOTAS");
        printf("\n\nA MEDIA DAS NOTAS SAO: %.2f", media);
        printf("\n\nSE DESEJA CONTINUAR DIGITE 1: ");
        scanf("%d", &i);
        system("cls");
    }
}