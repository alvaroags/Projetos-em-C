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
  char escolhacat[20], novamente, dnv;
  // Variaveis do login
  int escolha, escInicio, loopInicio, loopLogin;
  char C_usuario[50], C_email[50], C_numero[12], C_senha[15], L_usuario[50], L_senha[15], escLogin;
  // Variaveis da pesquisa de produto
  int p, j, escCar, loopMain = 0;
  char prodp[20];
	//Variaveis do carrinho
	float valorFinal;
	int z, cont=0, Pcont[10], vc = 1, para=0, g, confirCar;
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

  
  strcpy(produto[5].nomec, "mouse");
  strcpy(produto[5].nomec2, "logitech");
  strcpy(produto[5].nomec3, "m280");
  strcpy(produto[5].categoria, "informatica");
  produto[5].valor = 84.26;

//	strcpy(carrinho[0].nome, "a" );
//  strcpy(carrinho[0].categoria, "a" );
//  carrinho[0].valor = 2  ;
  
  setlocale(LC_ALL, "Portuguese");
  // sistema de Cadastro e Login //Comentar so pra testar mais rapido
  /* do { //Loop do login
    printf("\tSEJA BEM-VINDO A AMERICANAS PIRATEX\n");
    printf("\n1 - Cadastro");
    printf("\n2 - Login\n");
    scanf("%d", &escInicio);
    system("cls");

    switch (escInicio) {
    case 1:
      fflush(stdin);
      printf("\t\tCadastro\n");
      printf("\nInsira seu nome de usu�rio: ");
      gets(C_usuario);
      fflush(stdin);
      printf("Insira um e-mail: ");
      gets(C_email);
      fflush(stdin);
      printf("Insira um telefone: ");
      gets(C_numero);
      fflush(stdin);
      printf("Insira uma senha: ");
      gets(C_senha);
      fflush(stdin);
      system("cls");
      loopInicio = 1;
      break;
    case 2:
      do {
        fflush(stdin);
        printf("\t\tLogin\n\n");
        printf("Digite seu nome de usuario ou email: ");
        gets(L_usuario);
        fflush(stdin);
        printf("Digite sua senha: ");
        gets(L_senha);
        fflush(stdin);
        if (((strcmp(C_usuario, L_usuario) == 0) ||
             (strcmp(C_email, L_usuario) == 0)) &&
            (strcmp(C_senha, L_senha) == 0)) {
          loopLogin = 0;
          loopInicio = 0;
          system("cls");
          printf("Login realizado com sucesso!");
        } else {
        	system("cls");
        	printf("Usuario ou senha invalido");
        	printf("\nDeseja tentar novamente? (s ou n): ");
        	scanf("%c", &escLogin);
    		system("cls");
        	switch (escLogin) {
		        case 's':
		        case 'S':
		        	loopLogin = 1;
		    		break;
		        case 'n':
		        case 'N':
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
  } while (loopInicio == 1); */

  // Exibi�o bot
	do{
        loopMain = 0;
        printf("(�-�) - Olá! Sou assistente virtual Nerdola \n");
        printf("(�-�) - Oque você deseja? \n");
        printf("01 - Buscar um produto\n");
        printf("02 - Carrinho de compras\n");
        printf("03 - Exibição de produtos\n");
        printf("04 - Finalizar compra\n");
        scanf("%d", &escolhaS);
        fflush(stdin);

		
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
                    printf("\nProduto adicionado ao carrinho com sucesso!");
					break;
            }   
            printf("\nSe deseja continuar comprando digite 1: ");
            scanf("%d", &loopMain);
		    break;

		  // Carrinho
		case 2:
		    printf("\nCarrinho de compras \n\n");
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
		
		  // Exebi�o de produtos
		  case 3:
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
            printf("----> Informatica \n\n");
            printf("----> Eletrodomesticos \n\n");
            printf("----> Moveis \n\n");
            printf("----> Brinquedos \n\n");
            printf("----> TV\n\n");
            printf("----> Outro\n\n");
            printf("(o-o) - Qual Categoria de produto voce deseja?\n");
            gets(escolhacat);
            fflush(stdin);

            if(strcmp(escolhacat,"celulares")==0){
                for(i=0;i<=sizeof(produto[i]);i++){
                    if(strcmp(produto[i].categoria,"celular")==0){
                        printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                        printf("************\n");
                    }
            }
        }
             else if(strcmp(escolhacat,"informatica")==0){
                for(i=0;i<=sizeof(produto[i]);i++){
                    if(strcmp(produto[i].categoria,"informatica")==0){
                        printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                        printf("************\n");
                    }
            } 
        }
            else if(strcmp(escolhacat,"eletrodomesticos")==0){
                for(i=0;i<=sizeof(produto[i]);i++){
                    if(strcmp(produto[i].categoria,"eletrodomesticos")==0){
                        printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                        printf("************\n");
                    }
            }
        }
            else if(strcmp(escolhacat,"moveis")==0){
                for(i=0;i<=sizeof(produto[i]);i++){
                    if(strcmp(produto[i].categoria,"moveis")==0){
                        printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                        printf("************\n");
                    }
            }
        }
            else if(strcmp(escolhacat,"brinquedos")==0){
                for(i=0;i<=sizeof(produto[i]);i++){
                    if(strcmp(produto[i].categoria,"brinquedos")==0){
                        printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                        printf("************\n");
                    }
            }
        }
            else if(strcmp(escolhacat,"tv")==0){
                for(i=0;i<=sizeof(produto[i]);i++){
                    if(strcmp(produto[i].categoria,"tv")==0){
                        printf("%s \n%s \nR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                        printf("************\n");
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
            

             
            printf("Deseja continuar Pesquisando? \n");
            printf("S - Sim\n");
            printf("Outro - Não\n");
             
            scanf("%c",&novamente);
             fflush(stdin);
             system("cls");
             
            }while(novamente=='s');
		
			case 04:// finalizar compras
			    printf("Finlizar compras \n");
			    break;	  
		  }
	}while(loopMain == 1);
}

        
                
        

    
    

