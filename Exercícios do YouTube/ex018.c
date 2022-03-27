#include <stdio.h>
#include <stdlib.h>
int main(){
    float num1, num2, result;
    int i, esc; 
    do{
        printf("1 - SOMA\n");
        printf("2 - SUBTRAIR\n");
        printf("3 - MULTIPLICAR\n");
        printf("4 - DIVIDIR\n");
        printf("0 - SAIR\n");
        scanf("%d", &esc);
        if(esc<=4&&esc>0){
            printf("\nDIGITE UM NUMERO: ");
            scanf("%f", &num1);
            printf("\nDIGITE OUTRO NUMERO: ");
            scanf("%f", &num2);
        }
                switch(esc){
                    case 1: 
                        printf("SOMA: %.2f\n", num1 + num2);
                        break;
                    case 2: 
                        printf("SUBTRACAO: %.2f\n", num1 - num2);
                        break;
                    case 3: 
                        printf("MULTIPLICACAO: %.2f\n", num1 * num2);
                        break;
                    case 4:
                        while(num2==0){
                           printf("\nIMPOSSIVEL DIVIDIR POR 0, ESCOLHA OUTRO NUMERO\n");
                           scanf("%f", &num2); 
                        } 
                        printf("DIVISAO: %.2f\n", num1 / num2); 
                        break;
                    case 0:
                        printf("\nSAINDO...\n");
                        return 0;
                        break;
                    default:
                        printf("OPCAO INVALIDA!\n");
                }
        printf("\nSE DESEJA CONTINUAR DIGITE 1: ");
        scanf("%d", &i);
        system("cls");
    }while(i==1);
    return 0;
}