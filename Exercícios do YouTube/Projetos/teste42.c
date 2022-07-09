#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Cadastro e login -- Feito
// Banco de dados ods produtos -- A fazer
// Exibir produtos -- Feito
// Sistema de busca
// Carrinho de compras
// Finalizar compra
// Forca(se der tempo)
// Jogo da velha (se der tempo)231

void minusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
}

struct produ {
  char nome[50];
  char nomec[10];
  char nomec2[10];
  char nomec3[10];
  char categoria[30];
  float valor;
};

int main(void) {

  // variaveis
  // Variaveis de escolha
  int escolhaS, i;
  char escolhacat[20], novamente, dnv, car;
  // Variaveis do login
  int escolha, escInicio, loopInicio, loopLogin;
  char C_usuario[50], C_email[50], C_numero[12], C_senha[15], L_usuario[50], L_senha[15], escLogin, minus[500];
  // Variaveis da pesquisa de produto
  int p, j, escolhaAddCar, loopMain = 0, para, z, g, Pcont[50], cont=0, x;
  char prodp[50], minusProd[50];
	//Variaveis do carrinho
	float valorFinal; 
    int escCar; 
  // Struct
  struct produ produto[10];
  struct produ carrinho[10];

  strcpy(produto[0].nome, "smartphone samsung galaxy a12");
  strcpy(produto[0].nomec, "smartphone");
  strcpy(produto[0].nomec2, "samsung");
  strcpy(produto[0].nomec3, "galaxy");
  strcpy(produto[0].categoria, "celulares");
  produto[0].valor = 1022;

  strcpy(produto[1].nome, "smartphone motorola moto g60s");
  strcpy(produto[1].nomec, "smartphone");
  strcpy(produto[1].nomec2, "motorola");
  strcpy(produto[1].nomec3, "moto g60s");
  strcpy(produto[1].categoria, "celulares");
  produto[1].valor = 1542.10;

  strcpy(produto[2].nome, "iphone 11 apple");
  strcpy(produto[2].nomec, "smartphone");
  strcpy(produto[2].nomec2, "apple");
  strcpy(produto[2].nomec3, "iphone 11");
  strcpy(produto[2].categoria, "celulares");
  produto[2].valor = 3789.05;
  
  strcpy(produto[3].nome, "impressora epson l3250");
  strcpy(produto[3].nomec, "impressora");
  strcpy(produto[3].nomec2, "epson");
  strcpy(produto[3].nomec3, "epson l3250");
  strcpy(produto[3].categoria, "informatica");
  produto[3].valor = 1399.90;
  
  strcpy(produto[4].nome, "mouse sem fio logitech m280");
  strcpy(produto[4].nomec, "mouse");
  strcpy(produto[4].nomec2, "logitech");
  strcpy(produto[4].nomec3, "m280");
  strcpy(produto[4].categoria, "informatica");
  produto[4].valor = 84.26;

  strcpy(produto[5].nome, "monitor gamer aoc hero");
  strcpy(produto[5].nomec, "monitor");
  strcpy(produto[5].nomec2, "aoc");
  strcpy(produto[5].nomec3, "hero");
  strcpy(produto[5].categoria, "informatica");
  produto[5].valor = 1679.99;

  strcpy(produto[6].nome, "geladeira french door electrolux");
  strcpy(produto[6].nomec, "geladeira");
  strcpy(produto[6].nomec2, "electrolux");
  strcpy(produto[6].nomec3, "french door");
  strcpy(produto[6].categoria, "eletrodomésticos");
  produto[6].valor = 6299.99;  

  strcpy(produto[7].nome, "maquina de lavar brastemp bwn15");
  strcpy(produto[7].nomec, "maquina de lavar");
  strcpy(produto[7].nomec2, "brastemp");
  strcpy(produto[7].nomec3, "bwn15");
  strcpy(produto[7].categoria, "eletrodomésticos");
  produto[7].valor = 2949.99;

  strcpy(produto[8].nome, "microondas philco pme31");
  strcpy(produto[8].nomec, "microondas");
  strcpy(produto[8].nomec2, "philco");
  strcpy(produto[8].nomec3, "pme31");
  strcpy(produto[8].categoria, "eletrodomésticos");
  produto[8].valor = 619.99; 

  strcpy(produto[9].nome, "guarda roupa casal mayra preto fosco");
  strcpy(produto[9].nomec, "guarda roupa");
  strcpy(produto[9].nomec2, "mayra");
  strcpy(produto[9].nomec3, "preto fosco");
  strcpy(produto[9].categoria, "moveis");
  produto[9].valor = 949;   
  
  strcpy(produto[10].nome, "sofa-cama pratik 5000 mamflex");
  strcpy(produto[10].nomec, "sofa-cama");
  strcpy(produto[10].nomec2, "mamflex");
  strcpy(produto[10].nomec3, "pratik 5000");
  strcpy(produto[10].categoria, "moveis");
  produto[10].valor = 499;   

  strcpy(produto[11].nome, "pista hot wheels wave racers");
  strcpy(produto[11].nomec, "hot wheels");
  strcpy(produto[11].nomec2, "wave racers");
  strcpy(produto[11].nomec3, "epic challenge");
  strcpy(produto[11].categoria, "brinquedos");
  produto[11].valor = 299.99;   

  strcpy(produto[12].nome, "nerf ultra two motorizado");
  strcpy(produto[12].nomec, "nerf");
  strcpy(produto[12].nomec2, "ultra two");
  strcpy(produto[12].nomec3, "motorizado");
  strcpy(produto[12].categoria, "brinquedos");
  produto[12].valor = 224.99;  

  strcpy(produto[13].nome, "mega casa dos sonhos da barbie");
  strcpy(produto[13].nomec, "barbie");
  strcpy(produto[13].nomec2, "mega casa");
  strcpy(produto[13].nomec3, "mega casa dos sonhos");
  strcpy(produto[13].categoria, "brinquedos");
  produto[13].valor = 1599.99;  

  strcpy(produto[14].nome, "smart tv aoc roku led");
  strcpy(produto[14].nomec, "smart tv");
  strcpy(produto[14].nomec2, "aoc");
  strcpy(produto[14].nomec3, "roku led");
  strcpy(produto[14].categoria, "tv");
  produto[14].valor = 1799.99;  

  strcpy(produto[15].nome, "smart tv uh Samsung 4k");
  strcpy(produto[15].nomec, "smart tv");
  strcpy(produto[15].nomec2, "aoc");
  strcpy(produto[15].nomec3, "roku led");
  strcpy(produto[15].categoria, "tv");
  produto[15].valor = 1567.99;  

  strcpy(produto[16].nome, "notebook acer aspire 5");
  strcpy(produto[16].nomec, "notebook");
  strcpy(produto[16].nomec2, "acer");
  strcpy(produto[16].nomec3, "aspire 5");
  strcpy(produto[16].categoria, "informatica");
  produto[16].valor = 3689.00;  

  strcpy(produto[17].nome, "caixa de som jbl boomsbox");
  strcpy(produto[17].nomec, "caixa de som");
  strcpy(produto[17].nomec2, "jbl");
  strcpy(produto[17].nomec3, "boomsbox");
  strcpy(produto[17].categoria, "informatica");
  produto[17].valor = 480;
  
  
  
  
  setlocale(LC_ALL, "Portuguese");
  // sistema de Cadastro e Login //Comentar so pra testar mais rapido
  /*do { //Loop do login
    printf("\tSEJA BEM-VINDO A AMERICANAS PIRATEX\n");
    printf("\n1 - Cadastro");
    printf("\n2 - Login\n");
    scanf("%d", &escInicio);
    fflush(stdin);
    system("cls");

    switch (escInicio) {
      case 1:
        printf("\t\tCadastro\n");
        printf("\nInsira seu nome de usuário: ");
        gets(C_usuario);
        minusculo(C_usuario, minus);
        fflush(stdin);
        printf("Insira um e-mail: ");
        gets(C_email);
        minusculo(C_email, minus);
        fflush(stdin);
        printf("Insira um telefone: ");
        gets(C_numero);
        minusculo(C_numero, minus);
        fflush(stdin);
        printf("Insira uma senha: ");
        gets(C_senha);
        minusculo(C_senha, minus);
        fflush(stdin);
        system("cls");
        loopInicio = 1;
      break;
    case 2:
      do {
        printf("\t\tLogin\n\n");
        printf("Digite seu nome de usuario ou email: ");
        gets(L_usuario);
        minusculo(L_usuario, minus);
        fflush(stdin);
        printf("Digite sua senha: ");
        gets(L_senha);
        minusculo(L_senha, minus);
        fflush(stdin);
        if (((strcmp(C_usuario, L_usuario) == 0) ||
             (strcmp(C_email, L_usuario) == 0)) &&
            (strcmp(C_senha, L_senha) == 0)) {
          loopLogin = 0;
          loopInicio = 0;
          system("cls");
          printf("Login realizado com sucesso!\n");
        } else {
        	system("cls");
        	printf("Usuario ou senha invalido");
        	printf("\nDeseja tentar novamente? (s ou n): ");
        	scanf("%c", &escLogin);
          minusculo(escLogin, minus);
          fflush(stdin);
    		system("cls");
        	switch (escLogin) {
		        case 's':
		        	loopLogin = 1;
		    		  break;
		        case 'n':
		        	loopInicio = 1;
		        	loopLogin = 0;
		    	    break;
          }
        }
      } while (loopLogin == 1);
      break;
    default:
      loopInicio = 1;
      break;
    }
  } while (loopInicio == 1); 
*/
  do{
      loopMain = 0;
      printf("(?-?) - Olá! Sou assistente virtual Nerdola \n");
      printf("(?-?) - Oque você deseja? \n");
      printf("01 - Buscar um produto\n");
      printf("02 - Carrinho de compras\n");
      printf("03 - Exibição de produtos\n");
      printf("04 - Finalizar compra\n");
      scanf("%d", &escolhaS);
      fflush(stdin);
	  system("cls");
		
		switch (escolhaS) {
		
		// Sistema de busca
		case 1:
			
			printf("Busca de produtos \n");
		    gets(prodp);
		    fflush(stdin);
			
		    p=0;
			para=0;
		    while(para!=3){
		      	if (strcmp(prodp, produto[p].nome) == 0 || strcmp(prodp, produto[p].nomec) == 0 || strcmp(prodp, produto[p].nomec2) == 0 || strcmp(prodp, produto[p].nomec3) == 0) {
				    para = 3;
				    printf("%s\n", produto[p].nome);
			        printf("%s\n", produto[p].categoria);
			        printf("%.2f\n", produto[p].valor);
		      	}
                else
			  		p++;
		    }
			    
			printf("Para adicionar ao carrinho digite 1: ");
		    scanf("%d", &escCar);
		    fflush(stdin);
			    
			switch (escCar) {
			    case 1:		    	
				    cont++;
					for (z = cont-1;z<cont;z++){
		    			Pcont[z] = p;	
					}
                    printf("\nProduto adicionado ao carrinho com sucesso!\n");
					break;
            }   
            printf("\nSe deseja continuar comprando digite 1: ");
            scanf("%d", &loopMain);
            system("cls");
		    break;

		  // Carrinho
		case 2:
		    printf("Carrinho de compras \n\n");
		    if (cont==0){
		    	printf("O carrinho de compras está vazio! Adicione algum produto primeiro.\n");
                printf("\nSe deseja continuar comprando digite 1: ");
                scanf("%d", &loopMain);
			} else {
				for (g=0;g<z;g++){
                    j = Pcont[g];
					printf("-----------------\n\n");
					printf("%s\n", produto[j].nome);
					printf("%s\n", produto[j].categoria);
					printf("R$%.2f\n", produto[j].valor);
					valorFinal += produto[j].valor;
				}	
                printf("\n--------------------\n\n");
                printf("Valor Total: R$%.2f\n\n", valorFinal);    
		    }
		    break;
		
		  // Exebição de produtos
		  case 03:
		  	system("cls");
		    do{
                do{
                    dnv=0;
                printf("  _____       _______ ______ _____  ____  _____  _____           _____ \n"
    "/ ____|    /\\|__   __|  ____/ ____|/ __ \\|  __ \\|_   _|   /\\    / ____|\n"
    "| |       /  \\  | |  | |__ | |  __| |  | | |__) | | |    /  \\  | (___  \n"
    "| |      / /\\ \\ | |  |  __|| | |_ | |  | |  _  /  | |   / /\\ \\  \\___ \\ \n"
    "| |____ / ____ \\| |  | |___| |__| | |__| | | \\ \\ _| |_ / ____ \\ ____) |\n"
    " \\_____/_/    \\_\\_|  |______\\_____|\\____/|_|  \\_\\_____/_/    \\_\\_____/ \n"
    "                                                                      \n\n");
    
                printf("----> Celulares \n\n");
                printf("----> Informática \n\n");
                printf("----> Eletrodomésticos \n\n");
                printf("----> Móveis \n\n");
                printf("----> Brinquedos \n\n");
                printf("----> TV\n\n");
                printf("(°-°) - Qual Categoria de produto você deseja?\n");
                gets(escolhacat);
                fflush(stdin);
                system("cls");
                if(strcmp(escolhacat,"celulares")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"celulares")==0){
                            printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"informatica")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"informatica")==0){
                            printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("-------------\n");
                        }
                } 
            }
                else if(strcmp(escolhacat,"eletrodomesticos")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"eletrodomesticos")==0){
                            printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"moveis")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"moveis")==0){
                            printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"brinquedos")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"brinquedos")==0){
                            printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"tv")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"tv")==0){
                            printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("-------------\n");
                        }
                }
            }
                else{
                    printf("Opção inválida\n");
                    printf("Deseja  tentar novamente?\n");
                    printf("S - Sim\n");
                    printf("Outro - Não\n");
                
                    scanf("%c",&dnv);
                    fflush(stdin);
                    system("cls");
                }
                    }while(dnv=='s');
                    
                //busca por nome
                printf("\n(°-°) -  Deseja adicionar algum produto ao carrinho? \n");
                printf("S - Sim / N - Não :");
                scanf("%c",&car);
                fflush(stdin);
                
                switch(car){
                
                    case 's':
                    case 'S':
                        
                    printf(" Qual produto você irá adicionar ao carrinho? \n");
                    gets(prodp);
                    fflush(stdin);
               		p=0;
					para=0;
		    		while(para!=3){ 
                        if (strcmp(prodp, produto[p].nome) == 0 || strcmp(prodp, produto[p].nomec) == 0 || strcmp(prodp, produto[p].nomec2) == 0 || strcmp(prodp, produto[p].nomec3) == 0) {
                        	printf("%s\n", produto[p].nome);
                        	printf("%s\n", produto[p].categoria);
                        	printf("%.2f\n", produto[p].valor);
                        	printf("\nProduto adicionado com sucesso!\n");
                        	para = 3;
                        	cont++;
							for (z = cont-1;z<cont;z++){
		    					Pcont[z] = p;	
							}
                        }
                        else 
                        	p++;
                	}   
            		printf("\nSe deseja continuar comprando digite 1: ");
            		scanf("%d", &loopMain);
            		system("cls");
                    break;
                }

                
                printf("Deseja continuar Pesquisando? \n");
                printf("S - Sim\n");
                printf("N - Não\n");
                
                scanf("%c",&novamente);
                fflush(stdin);
                system("cls");
                
                }while(novamente=='s');
                break;
            
                case 04:// finalizar compras
                    printf("Finlizar compras \n");
                    break;	
                }   
	}while(loopMain == 1);
}