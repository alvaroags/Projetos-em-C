#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, qt[10], salvo;
    float valor[3], total[3], soma;
    for(i=0;i<3;i++){
        printf("INFORME O VALOR DO PRODUTO %d: ", i+1);
        scanf("%f", &valor[i]);
        printf("INFORME A QUANTIDADE VENDIDA DO PRODUTO %d: ", i+1);
        scanf("%d", &qt[i]);
        system("cls");
    }
    for(i=0;i<3;i++){
        total[i] = valor[i] * qt[i];
        soma += total[i];
        printf("QUANTIDADE VENDIDA DO PRODUTO %d: %d - ", i+1, qt[i]);
        printf("VALOR UNITARIO: R$%.2f - VALOR TOTAL: R$%.2f\n", valor[i], total[i]);
    }
    printf("\nVALOR TOTAL DAS COMPRAS: R$%.2f\nCOMISSAO DO VENDEDOR: R$%.2f", soma, soma*0.05);
    for(i=0;i<3;i++){
        if(qt[i]>salvo)
            salvo = qt[i];
    }
    for(i=0;i<3;i++){
        if(qt[i] == salvo)
            printf("\nA POSICAO DO PRODUTO MAIS VENDIDO: %d\t VALOR: R$%.2f", i, valor[i]);
    }
}