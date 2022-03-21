#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct film {
    int id;
    char nome[200];
    char genero[100];
    int anoLanc;
} filme;

typedef struct user {
    char nome[20];
    char tel[20];
} usuario;

int main() {
	
	int i,MC = 35; //Utilizado para atribuir os ids do filme automaticamente
	int loop = 1, a = 0, baixar = 0, esc, esc1; //Utilizados para o loop principal e swit

	//declaração das structs
	filme fCadastro[MC];
	usuario usr; 
	
	//Atribui o id automatico para todos
  	int posicao, f,teste;
	char busc[40],teste2[10];
	for (i=0;i<=MC;i++){
		fCadastro[i].id = i;
  	}
  
	//Cadastro dos filmes
	strcpy(fCadastro[0].nome, "Alone in the dark");
	strcpy(fCadastro[0].genero, "Terror");
	fCadastro[0].anoLanc = 2005;

	strcpy(fCadastro[1].nome, "Assasin's Creed");
	strcpy(fCadastro[1].genero, "Acao");
	fCadastro[1].anoLanc = 2005;
	
	strcpy(fCadastro[2].nome, "Bloodrayne");
	strcpy(fCadastro[2].genero, "Acao");
	fCadastro[2].anoLanc = 2006;

	strcpy(fCadastro[3].nome, "Dead Trigger");
	strcpy(fCadastro[3].genero, "Acao");
	fCadastro[3].anoLanc = 2019;

	strcpy(fCadastro[4].nome, "Detetive Pikachu");
	strcpy(fCadastro[4].genero, "Aventura");
	fCadastro[4].anoLanc = 2005;

	strcpy(fCadastro[5].nome, "Resident Evil 6: O Capitulo Final");
	strcpy(fCadastro[5].genero, "Acao,terror e suspense");
	fCadastro[5].anoLanc = 2017;
    
  	strcpy(fCadastro[6].nome, "Uncharted");
	strcpy(fCadastro[6].genero, "Acao e aventura");
	fCadastro[6].anoLanc = 2022;
    
  	strcpy(fCadastro[7].nome, "WIFI Ralph: Quebrando a internet");
	strcpy(fCadastro[7].genero, "Animaccao,comedia e aventura");
	fCadastro[7].anoLanc = 2019;
  
  	strcpy(fCadastro[8].nome, "Sonic- O Filme");
	strcpy(fCadastro[8].genero, "Aventura e animacao ");
	fCadastro[8].anoLanc = 2020;
  
  	strcpy(fCadastro[9].nome, "Resident Evil 5: Retribuicao 3D");
	strcpy(fCadastro[9].genero, "Acao,Ficcao Cientifica,Terror");
	fCadastro[9].anoLanc = 2012;
  
  	strcpy(fCadastro[10].nome, "Detona Ralph");
	strcpy(fCadastro[10].genero, "Animacao");
	fCadastro[10].anoLanc = 2013;
  
  	strcpy(fCadastro[11].nome, "Resident Evil: Bem-Vindo a Raccoon City");
	strcpy(fCadastro[11].genero, "Acao, Ficcao Cientifica e terror");
	fCadastro[11].anoLanc = 2021;
  
  	strcpy(fCadastro[12].nome, "Need For Speed");
	strcpy(fCadastro[12].genero, "Acao,Crime");
	fCadastro[12].anoLanc = 2014;
  
  	strcpy(fCadastro[13].nome, "Free Guy");
	strcpy(fCadastro[13].genero, "Acao,Aventura,Comedia");
	fCadastro[13].anoLanc = 2021;
  
  	strcpy(fCadastro[14].nome, "Silent Hill: Revelacao");
	strcpy(fCadastro[14].genero, "Terror, Suspense, Misterio");
	fCadastro[14].anoLanc = 2013;
  
  	strcpy(fCadastro[15].nome, "Tomb Raider");
	strcpy(fCadastro[15].genero, "Aventura");
	fCadastro[15].anoLanc = 2018;
  
  	strcpy(fCadastro[16].nome, "Monster Hunter");
	strcpy(fCadastro[16].genero, "Aventura, Ficcao Cientifica");
	fCadastro[16].anoLanc = 2021;
  
  	strcpy(fCadastro[17].nome, "Resident Evil 4: Recomeco");
	strcpy(fCadastro[17].genero, "Acao,Terror");
	fCadastro[17].anoLanc = 2010;
  
  	strcpy(fCadastro[18].nome, "Resident Evil 2: Apocalipse");
	strcpy(fCadastro[18].genero, "Acao, Terror, Ficcao Cientifica e  Suspense");
	fCadastro[18].anoLanc = 2004;
  
  	strcpy(fCadastro[19].nome, "Resident Evil: o Hospede Maldito");
	strcpy(fCadastro[19].genero, "Acao, Aventura,terror, Ficcao cientifica");
	fCadastro[19].anoLanc = 2002;
  
  	strcpy(fCadastro[20].nome, "Rampage: Destruicao total");
	strcpy(fCadastro[20].genero, "Acao, ficcao Cientifica");
	fCadastro[20].anoLanc = 2018;
  
  	strcpy(fCadastro[21].nome, "Resident Evil3: A Exticao");
	strcpy(fCadastro[21].genero, "Acao, Terror e Ficcao cientifica");
	fCadastro[21].anoLanc = 2007;
  
  	strcpy(fCadastro[22].nome, "Mortal Kombat");
	strcpy(fCadastro[22].genero, "Acao, Fantasia");
	fCadastro[22].anoLanc = 2021;
  
  	strcpy(fCadastro[23].nome, "Principe da Persia: as Areias do tempo");
	strcpy(fCadastro[23].genero, "Acao, Aventura, Fantasia e Romance");
	fCadastro[23].anoLanc = 2010;
  
  	strcpy(fCadastro[24].nome, "jumanji-Proxima fase");
	strcpy(fCadastro[24].genero, "Aventura e Comedia");
	fCadastro[24].anoLanc = 2021;
  
  	strcpy(fCadastro[24].nome, "Pokemon-Detetive Pikachu");
	strcpy(fCadastro[24].genero, "Aventura");
	fCadastro[24].anoLanc = 2019;
  
  	strcpy(fCadastro[25].nome, "Angry Birds: O filme 2");
	strcpy(fCadastro[25].genero, "Animacao, Aventura e Comedia");
	fCadastro[25].anoLanc = 2019;
  
  	strcpy(fCadastro[26].nome, "Terror Em Silent Hill");
	strcpy(fCadastro[26].genero, "Aventura, Drama e Horror");
	fCadastro[26].anoLanc = 2006;
  
  	strcpy(fCadastro[27].nome, "Lara Croft: Tomb Raider");
	strcpy(fCadastro[27].genero, "Acao, Aventura");
	fCadastro[27].anoLanc = 2001;
  
  	strcpy(fCadastro[28].nome, "Lara Croft- A Origem da Vida");
	strcpy(fCadastro[28].genero, "Acao, Aventura");
	fCadastro[28].anoLanc = 2003;
  
  	strcpy(fCadastro[29].nome, "Portal do Guerreiro");
	strcpy(fCadastro[29].genero, "Acao, Fantasia");
	fCadastro[29].anoLanc = 2018;
  
  	strcpy(fCadastro[30].nome, "Hitman- Assasssino 47");
	strcpy(fCadastro[30].genero, "Acao, Crime e Drama");
	fCadastro[30].anoLanc = 2007;

	//Fim do cadastro
	
    printf("\tBEM-VINDO AO PIRATEX FILMES\n");
    printf("*******Cadastro Usuario*******\n");
    
    printf("Insira seu nome: ");
    gets(usr.nome);
    fflush(stdin);
    printf("Insira seu numero: ");
    gets(usr.tel);
    fflush(stdin); 
    printf("nome : %s\n", usr.nome);
    printf("telefone : %s\n", usr.tel);

	while (loop == 1){
		printf("\n\n------### P I R A T E X F I L M E S ###------\n");
		printf("Bem vindo, %s, o que deseja fazer? \n", usr.nome);
		printf("1 - Cadastrar filme\n");
		printf("2 - Catalogo de filmes\n");
		printf("3 - Pesquisar filme\n");
		printf("4 - Sair\n");

		scanf("%d", &esc);

		switch(esc){
			case 1: //Cadastra os filmes
				if (a < MC){
					printf("----Cadastro de filmes-----\n");
					printf("Aperte 1 para cadastrar, 2 para voltar ");
				
					scanf("%d", &esc1);
					fflush(stdin);
					
					switch(esc1){
						case 1:
							
							for(a=0;a < MC;a++){	
							
								if(strlen(fCadastro[a].nome) == 0){
									
									printf("--Cadastrando novo filme--\n");
									printf("FILME ID: %d\n", fCadastro[a].id);
							
            			   			printf("Insira o nome do filme: ");
              		 				gets(fCadastro[a].nome);
            	  					fflush(stdin);
						 	
	    	      	     			printf("Insira o genero do filme: ");
    		      		  			gets(fCadastro[a].genero);
	        						fflush(stdin); 
               		 			
            					 	printf("Insira o ano de lancamento: ");
              	 				 	scanf("%d",&fCadastro[a].anoLanc);
              	 				 	fflush(stdin);
              	 				 	break;
              	 				 	
            					} //fim if
            				} //Fim for
						break; //fim case 1
						
						default: break;
					} // fim switch esc1
				} else {
					printf("\nBase de dados cheia\n");
				}
				
		break; //Termino do cadastro
		while(baixar == 0){
			case 2: //Mostra todos filmes cadastrados
					
				for(a=0;a < MC;a++){
					if (strlen(fCadastro[a].nome) != 0){
						printf("\nFILME ID: %d\n", fCadastro[a].id);
						printf("%s\n", fCadastro[a].nome);
						printf("%s\n", fCadastro[a].genero);
						printf("%d\n", fCadastro[a].anoLanc);
					}
				}
				fflush(stdin);
				printf("DIGITE O NUMERO O ID DO FILME QUE DESEJA BAIXAR: ");
			    scanf("%d",&teste);
			    fflush(stdin);
			    for(f=0;f<=MC;f++){
			    	if(teste==fCadastro[f].id){
			        posicao = f;
					    f = MC;
			    	} else{
			    	posicao = -1;
			    }
			    }
			    if(posicao == -1){
				    printf("\nOPCAO INVALIDA\n");
			    }
			    else{
			   		printf("NOME DO FILME: %s\n", fCadastro[posicao].nome);
			    	printf("GENERO DO FILME: %s\n", fCadastro[posicao].genero);
			  		printf("ANO DO FILME: %d\n", fCadastro[posicao].anoLanc);
	      		}
	      		printf("\nDESEJA BAIXAR O FILME? (SE SIM DIGITE 1, SENAO DIGITE OUTRO: )");
	      		scanf("%d", &baixar);
	      		printf("\n");
	      		switch(baixar){
	      			case 1:
	      				printf("\nDOWNLOAD CONCLUIDO\n\n");
	      				break;
	      			default:
	      				baixar = 5;
	      				break;
				  }
		}
			break;
		while(baixar == 0){
			case 3:	//Pesquisa os filmes cadastrados
				fflush(stdin);
				printf("DIGITE O NOME DO FILME: ");
			    gets(busc);
			    fflush(stdin);
			    
			    for(f=0;f<=MC;f++){
			    	if(strcmp(busc,fCadastro[f].nome) == 0){
			        posicao = f;
					    f = MC;
			    	} else{
			    	posicao = -1;
			    }
			    }
			    if(posicao == -1){
				    printf("\nOPCAO INVALIDA\n");
			    }
			    else{
			   		printf("NOME DO FILME: %s\n", fCadastro[posicao].nome);
			    	printf("GENERO DO FILME: %s\n", fCadastro[posicao].genero);
			  		printf("ANO DO FILME: %d\n", fCadastro[posicao].anoLanc);
	      		}
	      		printf("\nDESEJA BAIXAR O FILME? (SE SIM DIGITE 1, SENAO DIGITE OUTRO: )");
	      		scanf("%d", &baixar);
	      		printf("\n");
	      		switch(baixar){
	      			case 1:
	      				printf("\nDOWNLOAD CONCLUIDO\n\n");
	      				break;
	      			default:
	      				baixar = 5;
	      				break;
				  }
      		}
      		break;
		case 4:	
			printf("\nSaindo...\n");
    		loop = 2;
    		break;
		default:
      		printf("\nInsira um numero valido\n");
			loop = 1;
			break;
		}		
	}
}