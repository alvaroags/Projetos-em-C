#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j;

int PreenTabela(int linha, int coluna, int preenchido[10][10]){
    if(preenchido[linha][coluna]==0){
        preenchido[linha][coluna] = 1;
        return 1;
    } else{
    	return 2;
	}
}
void zeradorPreen(int preenchido[10][10]){
    for(i=0;i<10;i++){
        for(j=0;j<10;j++)
            preenchido[i][j] = 0;
    }
}
void zeradorTabela(char escolha[10][10][3]){
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            strcpy(escolha[i][j], " ");
        }
    }
    return;
}
void ImprimiTabela(char escolha[10][10][3], int coluna, int linha){
    strcpy(escolha[linha][coluna], "9");
    printf("\t   ");
    for(i=0;i<10;i++){
        printf(" %d |", i);
    }
    for(i=0;i<10;i++){
        printf("\n\t  -----------------------------------------\n");
        printf("\t%d |", i);
        for(j=0;j<10;j++)
            printf(" %s |", escolha[i][j]);
    }
    return;
}
int main(){
    char escolha[10][10][3];
    int preenchido[10][10];
    int coluna=20, linha=20, loop=1, verifica;
    zeradorPreen(preenchido);
    zeradorTabela(escolha);
    ImprimiTabela(escolha, coluna, linha);
    do{
	    printf("\nDIGITE A COLUNA: ");
	    scanf("%d", &coluna);
	    fflush(stdin);
	    printf("DIGITE A LINHA: ");
	    scanf("%d", &linha);
	    fflush(stdin);
	    verifica = PreenTabela(coluna, linha, preenchido);
	    if(verifica==1){
	    	system("cls");
	    	ImprimiTabela(escolha, coluna, linha);
		}
		else
			printf("ESSE ESPACO JA FOI PREENCHIDO");
    } while(loop==1);
}
