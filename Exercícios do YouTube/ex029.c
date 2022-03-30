//
#include<stdio.h>
#include<stdlib.h>
int main(){
    int confir;
    float nota1, nota2, media;
    do{
        do{
            printf("DIGITE A NOTA 1: ");
            scanf("%f", &nota1);
        } while(nota1>10||nota1<0);
        do{
            printf("DIGITE A NOTA 2: ");
            scanf("%f", &nota2);
        } while(nota2>10||nota2<0);
        media = (nota1 + nota2) / 2;
        printf("\nMEDIA: %.2f", media);
        printf("\nDESEJA REALIZAR OUTRO CALCULO? (1-SIM OU 2-NAO) ");
        scanf("%d", &confir);
        system("cls");
} while(confir==1);
}