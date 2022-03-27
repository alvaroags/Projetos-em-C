//exercicio do calculo de meia-vida
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, tempo;
    float gramas, ent;
    do{
        j=0;
        printf("DIGITE UM VALOR EM GRAMAS: ");
        scanf("%f", &gramas);
        ent = gramas;
        for(i=1;ent>=0.05;i++){
            ent = ent / 2;
        }
        tempo = i * 50;
        printf("NUMERO DE MEIAS VIDAS: %d\n\n", i);
        if(tempo>=3600)
            printf("O TEMPO NECESSARIO PARA %.2fG SER MENOR QUE 0.05G E: %2dh%2dmin%2ds", gramas, tempo/3600, (tempo%3600)/60, tempo%3600%60); 
        else if(tempo>=60)
            printf("O TEMPO NECESSARIO PARA %.2fG SER MENOR QUE 0.05G E: %2dmin%2ds", gramas, tempo / 60, tempo % 60); 
        else
            printf("O TEMPO NECESSARIO PARA %.2fG SER MENOR QUE 0.05G E: %2ds", gramas, tempo);   
        printf("\n\nDIGITE 1 PARA CONTINUAR: ");
        scanf("%d", &j);
        system("cls");
    } while(j==1);
}