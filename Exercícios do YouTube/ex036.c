#include<stdio.h>
#include<stdlib.h>
int main(){
    int loop=1, i, j, num[10], num2[10], esc;
    do{
        j=0;
        for(i=0;i<10;i++){
            printf("DIGITE O NUMERO %d: ", i+1);
            scanf("%d", &num[i]);
        }
        system("cls");
        printf("0 - FINALIZA O PROGRAMA\n");
        printf("1 - IMPRIME O VETOR NA ORDEM DO INICIO AO FIM\n");
        printf("2 - IMPRIME O VETOR NA ORDEM INVERSA");
        scanf("%d", &esc);
        system("cls");
        switch (esc){
        case 0:
            loop = 0;
            break;
        case 1: 
            for(i=0;i<10;i++)
                printf("%d ", num[i]);
            break;
        case 2:
            for(i=9;i>=0;i--){
                num2[j] = num[i];
                j++;
            }
            for(j=0;j<10;j++)
                printf("%d ", num2[j]);
            break;
        default:
            loop =1;
        }
        getch();
        system("cls");
    }while(loop==1);
}