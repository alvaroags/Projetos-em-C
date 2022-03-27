#include <stdio.h>
int main(){
    int esc, confir;
    confir = 1;
    float dolar, real;
    printf("BEM-VINDO AO PROGRAMA DE CONVERSAO CAMBIAL\n");
    while (confir==1){
        printf("SE DESEJA FAZER A CONVERSAO DE DOLARES PARA REAIS DIGITE 1, SE DESEJA CONVERTER REAIS PARA DOLARES DIGITE 2: ");
        scanf("%d", &esc);
        switch (esc){
            case 1:
                printf("PORFAVOR DIGITE O VALOR QUE DESEJA EM DOLARES: US$ ");
                scanf("%f", &dolar);
                real = dolar * 5.30;
                printf("O VALOR DA CONVERSAO EM R$ %.2f", real);
                break;
            
            case 2:
                printf("PORFAVOR DIGITE O VALOR QUE DESEJA EM REAIS: R$ ");
                scanf("%f", &real);
                dolar = real / 5.30;
                
                printf("O VALOR DA CONVERSAO EM US$ %.2f", dolar);
                break;
            default:
                printf("OPCAO INVALIDA!");
                break;
        }
        printf("\n\nDESEJA CONTINUAR? SE SIM DIGITE 1, SENAO DIGITE OUTRO VALOR: ");
        scanf("%d", &confir);
    }
}