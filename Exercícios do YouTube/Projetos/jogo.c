#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,coluna,linha,jogador=1, j, ganhou=0, loop, pt1=0, pt2=0, jogada;
	char espaco[3][3][3];
	do{
		int preenchido[3][3]={0};
		jogador = 1;
		jogada = 0;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++)
				strcpy(espaco[i][j], " ");
		}	
		do{	
			printf("\tJOGO DA VELHA\tJOGADOR 1: %d\n\t\t\tJOGADOR 2: %d\n", pt1, pt2);
			printf("\t 1   2   3\n");
			for(i=0;i<3;i++){
				for(j=0;j<1;j++){
					printf(" %d", i+1);
					printf("\t %s | %s | %s \n",espaco[i][j],espaco[i][j+1],espaco[i][j+2]);
					if(i<2)
						printf("\t-----------\n");
				}
			}
			printf("\nEscolha a coluna : ");
			scanf("%d",&coluna);
			printf("Escolha a linha : ");
			scanf("%d",&linha);
		
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if((coluna-1)==i&&(linha-1)==j){
						if(preenchido[i][j]==0){
							if(jogador==1){
								strcpy(espaco[i][j], "X");
								jogador=2;
								preenchido[i][j]=1;
							}
							else{
								strcpy(espaco[i][j], "O");
								jogador=1;
								preenchido[i][j]=1;
								}
							jogada++;
							}
						else
							printf("Local já preenchido\n");
					}
				}			
			}
			ganhou=0;
			for(i=0;i<3;i++){
				for(j=0;j<1;j++){
					if((strcmp(espaco[i][j], "X")==0)&&(strcmp(espaco[i][j+1], "X")==0)&&(strcmp(espaco[i][j+2], "X")==0))
						ganhou = 3;
					else if((strcmp(espaco[i][j], "O")==0)&&(strcmp(espaco[i][j+1], "O")==0)&&(strcmp(espaco[i][j+2], "O")==0))
						ganhou = 2;
				}
			}
			for(i=0;i<1;i++){
				for(j=0;j<3;j++){
					if((strcmp(espaco[i][j], "X")==0)&&(strcmp(espaco[i+1][j], "X")==0)&&(strcmp(espaco[i+2][j], "X")==0))
						ganhou = 3;
					else if((strcmp(espaco[i][j], "O")==0)&&(strcmp(espaco[i+1][j], "O")==0)&&(strcmp(espaco[i+2][j], "O")==0))
						ganhou = 2;
				}
			}
			if((strcmp(espaco[0][0], "X")==0)&&(strcmp(espaco[1][1], "X")==0)&&(strcmp(espaco[2][2], "X")==0))
				ganhou = 3;
			else if((strcmp(espaco[0][0], "O")==0)&&(strcmp(espaco[1][1], "O")==0)&&(strcmp(espaco[2][2], "O")==0))
				ganhou = 2;
			else if((strcmp(espaco[0][2], "X")==0)&&(strcmp(espaco[1][1], "X")==0)&&(strcmp(espaco[2][0], "X")==0))
				ganhou = 3;
			else if((strcmp(espaco[0][2], "O")==0)&&(strcmp(espaco[1][1], "O")==0)&&(strcmp(espaco[2][0], "O")==0))
				ganhou = 2;
			else if(jogada==9)
				ganhou = 4;
			
		}while(ganhou==0);
		printf("\tJOGO DA VELHA\tJOGADOR 1: %d\n\t\t\tJOGADOR 2: %d\n", pt1, pt2);
		printf("\t 1   2   3\n");
			for(i=0;i<3;i++){
				for(j=0;j<1;j++){
					printf(" %d", i+1);
					printf("\t %s | %s | %s \n",espaco[i][j],espaco[i][j+1],espaco[i][j+2]);
					if(i<2)
						printf("\t-----------\n");
				}
			}
		if(ganhou==2){
			printf("\nPARABENS JOGADOR 2, VOCE VENCEU!!");
			pt2++;
		}
		else if (ganhou==3){
			printf("\nPARABENS JOGADOR 1, VOCE GANHOU!!");
			pt1++;
		}
		else
			printf("\nQUE PENINHA, NAO TIVEMOS GANHADOR ESSA RODADA");
		printf("\nPARA CONTINUAR DIGITE 1: ");
		scanf("%d", &loop);
		system("cls");
	}while(loop==1);
}
