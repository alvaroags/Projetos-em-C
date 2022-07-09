#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Cadastro e login -- Feito
// Banco de dados ods produtos -- ta bom o suficiente
// Exibir produtos -- Feito
// Sistema de busca -- feito
// Carrinho de compras -- feito
// Finalizar compra -- feito
//Margarete --- feito
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
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP; 
  SetConsoleOutputCP(CPAGE_UTF8);
  // variaveis
  // Variaveis de escolha
  int escolhaS, i;
  char escolhacat[20], novamente, dnv, car, testeCarrinho;
  // Variaveis do login
  int escolha, escInicio, loopInicio, loopLogin, loopLista, loopCat, loopVoltar;
  char C_usuario[50], C_email[50], C_numero[12], C_senha[15], L_usuario[50], L_senha[15], escLogin, minus[500];
//Variáveis do cadastro do endereço;
	char Ce_rua[30], Ce_bairro[30], Ce_cidade[30], Ce_numres[6], Ce_comp[30], esc_end;
  // Variaveis da pesquisa de produto
  int p, j, escolhaAddCar, loopMain = 0, para, z, g, Pcont[50], cont=0, x;
  char prodp[50], minusProd[50];
	//Variaveis do carrinho
	float valorFinal;
	char valCard[5];
	int pgto, numCard, cvCard, escCar, escolhaFinal, confirpag, loopPag;
    //variaveis robozin
	int a=1,b=1;
	char fala[50];
// Struct
  struct produ produto[50];
  struct produ carrinho[10];

  strcpy(produto[0].nome, "samsung galaxy a12");
  strcpy(produto[0].nomec, "samsung");
  strcpy(produto[0].nomec2, "samsung galaxy");
  strcpy(produto[0].nomec3, "galaxy");
  strcpy(produto[0].categoria, "celulares");
  produto[0].valor = 1022;

  strcpy(produto[1].nome, "motorola motog 60s");
  strcpy(produto[1].nomec, "moto g");
  strcpy(produto[1].nomec2, "motorola");
  strcpy(produto[1].nomec3, "moto g60s");
  strcpy(produto[1].categoria, "celulares");
  produto[1].valor = 1542.10;

  strcpy(produto[2].nome, "apple iphone 11");
  strcpy(produto[2].nomec, "iphone");
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
  strcpy(produto[6].categoria, "eletrodomesticos");
  produto[6].valor = 6299.99;  

  strcpy(produto[7].nome, "lavadora brastemp bwn15");
  strcpy(produto[7].nomec, "maquina de lavar");
  strcpy(produto[7].nomec2, "brastemp");
  strcpy(produto[7].nomec3, "lavadora");
  strcpy(produto[7].categoria, "eletrodomesticos");
  produto[7].valor = 2949.99;

  strcpy(produto[8].nome, "microondas philco pme31");
  strcpy(produto[8].nomec, "microondas");
  strcpy(produto[8].nomec2, "philco");
  strcpy(produto[8].nomec3, "pme31");
  strcpy(produto[8].categoria, "eletrodomesticos");
  produto[8].valor = 619.99; 

  strcpy(produto[9].nome, "guarda roupa casal mayra preto fosco");
  strcpy(produto[9].nomec, "guarda roupa");
  strcpy(produto[9].nomec2, "mayra");
  strcpy(produto[9].nomec3, "guarda");
  strcpy(produto[9].categoria, "moveis");
  produto[9].valor = 949;   
  
  strcpy(produto[10].nome, "sofa-cama pratik 5000 mamflex");
  strcpy(produto[10].nomec, "sofa-cama");
  strcpy(produto[10].nomec2, "mamflex");
  strcpy(produto[10].nomec3, "sofa");
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
  strcpy(produto[14].nomec, "televisao 40 polegadas");
  strcpy(produto[14].nomec2, "aoc");
  strcpy(produto[14].nomec3, "roku led");
  strcpy(produto[14].categoria, "tv");
  produto[14].valor = 1799.99;  

  strcpy(produto[15].nome, "smart tv samsung 4k");
  strcpy(produto[15].nomec, "televisao 50 polegadas");
  strcpy(produto[15].nomec2, "samsung");
  strcpy(produto[15].nomec3, "tv 4k");
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
 
  strcpy(produto[18].nome, "xiaomi redmi 9A");
  strcpy(produto[18].nomec, "xiaomi 9a");
  strcpy(produto[18].nomec2, "redmi");
  strcpy(produto[18].nomec3, "xiaomi");
  strcpy(produto[18].categoria, "celulares");
  produto[18].valor = 1300;

  strcpy(produto[19].nome, "geladeira defrost duplex com freezer");
  strcpy(produto[19].nomec, "geladeira defrost");
  strcpy(produto[19].nomec2, "geladeira duplex");
  strcpy(produto[19].nomec3, "geladeira com freezer");
  strcpy(produto[19].categoria, "eletrodomesticos");
  produto[19].valor = 2.299; 
 
  strcpy(produto[20].nome, "carregador iphone completo original");
  strcpy(produto[20].nomec, "carregador iphone");
  strcpy(produto[20].nomec2, "carregador original");
  strcpy(produto[20].nomec3, "carregador");
  strcpy(produto[20].categoria, "informatica");
  produto[20].valor = 131.66;
  
  strcpy(produto[21].nome, "smart tv lg nanocell");
  strcpy(produto[21].nomec, "televisao lg");
  strcpy(produto[21].nomec2, "tv lg");
  strcpy(produto[21].nomec3, "lg nanocell");
  strcpy(produto[21].categoria, "tv");
  produto[21].valor = 3.199;

  strcpy(produto[22].nome, "alexa echoDot bluetooth");
  strcpy(produto[22].nomec, "echodot");
  strcpy(produto[22].nomec2, "alexa bluetooth");
  strcpy(produto[22].nomec3, "alexa");
  strcpy(produto[22].categoria, "informatica");
  produto[22].valor = 268.20;

  strcpy(produto[23].nome, "fone de ouvido galaxy bluetooth");
  strcpy(produto[23].nomec, "fone de ouvido");
  strcpy(produto[23].nomec2, "fone bluetooth");
  strcpy(produto[23].nomec3, "fone");
  strcpy(produto[23].categoria, "informatica");
  produto[23].valor = 359.91;

  strcpy(produto[24].nome, "huawei smart watch");
  strcpy(produto[24].nomec, "smart watch");
  strcpy(produto[24].nomec2, "alexa bluetooth");
  strcpy(produto[24].nomec3, "relogio");
  strcpy(produto[24].categoria, "informatica");
  produto[24].valor = 268.20;

  strcpy(produto[25].nome, "lava louças electrolux 10 servicos");
  strcpy(produto[25].nomec, "lava louças electrolux");
  strcpy(produto[25].nomec2, "electrolux 10 Servicos");
  strcpy(produto[25].nomec3, "lava louças");
  strcpy(produto[25].categoria, "eletrodomesticos");
  produto[25].valor = 3.799; 

  strcpy(produto[26].nome, "maquina de lavar consul com ciclo edredom");
  strcpy(produto[26].nomec, "maquina de Lavar Consul");
  strcpy(produto[26].nomec2, "ciclo Edredom");
  strcpy(produto[26].nomec3, "maquina de lavar com cilo edredom");
  strcpy(produto[26].categoria, "eletrodomesticos");
  produto[26].valor = 1.460; 
  
  strcpy(produto[27].nome, "fogao brastemp 4 bocas");
  strcpy(produto[27].nomec, "fogao 4 bocas");
  strcpy(produto[27].nomec2, "brastemp");
  strcpy(produto[27].nomec3, "fogao");
  strcpy(produto[27].categoria, "eletrodomesticos");
  produto[27].valor = 1.070; 

  strcpy(produto[28].nome, "rack com painel para tv");
  strcpy(produto[28].nomec, "rack para tv");
  strcpy(produto[28].nomec2, "rack com painel");
  strcpy(produto[28].nomec3, "rack");
  strcpy(produto[28].categoria, "moveis");
  produto[28].valor = 308.44; 
  
  strcpy(produto[29].nome, "kit 4 cadeiras charles eames");
  strcpy(produto[29].nomec, "kit de cadeiras");
  strcpy(produto[29].nomec2, "cadeiras charles eames");
  strcpy(produto[29].nomec3, "cadeira");
  strcpy(produto[29].categoria, "moveis");
  produto[29].valor = 435.45; 

  strcpy(produto[30].nome, "escrivaninha 1 porta 1 gaveta vitoria");
  strcpy(produto[30].nomec, "escrivaninha vitoria");
  strcpy(produto[30].nomec2, "escrivaninha");
  strcpy(produto[30].nomec3, "mesa de escritorio");
  strcpy(produto[30].categoria, "moveis");
  produto[30].valor = 179.10; 
  
  setlocale(LC_ALL, "Portuguese");
  // sistema de Cadastro e Login //Comentar so pra testar mais rapido
  	do { //Loop do login
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
			printf("---------------------\n");
			printf("\tENDEREÇO\n");
			printf("Digite nome da rua: ");
			gets(Ce_rua);
			fflush(stdin);
			printf("Digite o bairro: ");
			gets(Ce_bairro);
			fflush(stdin);
			printf("Digite o nome da cidade: ");
			gets(Ce_cidade);
			fflush(stdin);
			printf("Digite o número da residência: ");
			gets(Ce_numres);
			fflush(stdin);
			printf("Complemento? (Aperte enter para pular)\n");
			gets(Ce_comp);
			fflush(stdin);
			printf("Cadastro concluído! Pressione qualquer tecla.");
			getch();
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
                    case 'S':
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
  	
		do{
      		loopMain = 0;
      		loopVoltar = 0;
      		dnv=0;
    		loopLista=0;
            loopCat=0;
            loopVoltar=0;
            novamente=0;
		 printf(                                                                                    
"\n\t ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n"
"\t¦¦¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦   ¦         ¦        ¦¦¦¦¦   ¦           ¦         ¦   ¦¦¦¦¦¦   ¦¦\n"
"\t¦¦¦¦¦¦¦  ¦  ¦¦¦¦¦¦  ¦   ¦¦¦    ¦   ¦¦¦¦¦¦¦   ¦¦¦¦   ¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦¦¦¦   ¦¦¦   ¦¦¦¦\n"
"\t¦¦¦¦¦¦  ¦¦   ¦¦¦¦¦   ¦   ¦ ¦   ¦   ¦¦¦¦¦¦¦   ¦¦¦¦   ¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦   ¦   ¦¦¦¦¦\n"
"\t¦¦¦¦¦   ¦¦¦   ¦¦¦¦   ¦¦   ¦¦   ¦       ¦¦¦  ¦   ¦¦¦¦¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦       ¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦\n"
"\t¦¦¦¦       ¦   ¦¦¦   ¦¦¦  ¦¦   ¦   ¦¦¦¦¦¦¦   ¦¦   ¦¦¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦   ¦   ¦¦¦¦¦\n"
"\t¦¦¦   ¦¦¦¦¦¦¦   ¦¦   ¦¦¦¦¦¦¦   ¦   ¦¦¦¦¦¦¦   ¦¦¦¦   ¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦   ¦¦¦¦¦¦¦¦   ¦¦¦   ¦¦¦¦\n"
"\t¦¦   ¦¦¦¦¦¦¦¦¦   ¦   ¦¦¦¦¦¦¦   ¦         ¦   ¦¦¦¦¦¦   ¦   ¦¦¦¦¦   ¦¦¦¦¦         ¦   ¦¦¦¦¦¦   ¦¦\n"
"\t ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n\n"

                                                                                                                                                                 
);
      printf("(°-°) - Olá! %s, sou sua assistente virtual Margaret \n", C_usuario);
      printf("(°-°) - Oque você deseja? \n\n");
      printf("-----------------------------------\n");
      printf("01 - Buscar um produto\n");
      printf("02 - Lista de produtos\n");
      printf("03 - Carrinho de compras\n");
	  printf("04 - Conversar\n");
	  printf("05 - Sair\n");
      printf("-----------------------------------\n");
      escolhaS = 0;
      scanf("%d", &escolhaS);
      fflush(stdin);
	  system("cls");
	  dnv=0;
	  testeCarrinho=0;
		switch (escolhaS) {
		
		// Sistema de busca
		case 1:
			
			do{
				dnv=0;
				printf(
	"\t  ____                      \n"
	"\t | __ ) _   _ ___  ___ __ _ \n"
	"\t |  _ \\| | | / __|/ __/ _` |\n"
	"\t | |_) | |_| \\__ \\ (_| (_| |\n"
	"\t |____/ \\__,_|___/\\___\\__,_|\n\n\n"                     
	);
				printf("(°-°) - Digite um produto para pesquisar \n");
			    gets(prodp);
			    fflush(stdin);
				
			    p=0;
				para=0;
			    while(para!=3){
			      	if (strcmp(prodp, produto[p].nome) == 0 || strcmp(prodp, produto[p].nomec) == 0 || strcmp(prodp, produto[p].nomec2) == 0 || strcmp(prodp, produto[p].nomec3) == 0) {
					    para = 3;
					    printf("\n\tNome: %s\n", produto[p].nome);
				        printf("\tCategoria: %s\n", produto[p].categoria);
				        printf("\tValor: R$%.2f\n", produto[p].valor);
			      	}
	                else{
				  		p++;
				  		if(p>=50){
				  			printf("\nProduto não encontrado!\n\n");
				  			para = 3;
				  			printf("Deseja tentar novamente? (s - sim / n - não) ");
				  			scanf("%c", &dnv);
				  			fflush(stdin);
				  			if(dnv!='s')
				  				return 0;
				  			system("cls");
						  }
					}
				  		
			    }
			} while(dnv=='s'||dnv=='S');
			    
			printf("\nPara adicionar ao carrinho digite 1: ");
		    scanf("%d", &escCar);
		    fflush(stdin);
			    
			switch (escCar) {
			    case 1:		    	
				    cont++;
					for (z = cont-1;z<cont;z++){
		    			Pcont[z] = p;
						valorFinal += produto[p].valor;
					}
                    printf("\nProduto adicionado ao carrinho com sucesso!\n");
					break;
            }   
            printf("\nSe deseja continuar comprando digite 1: ");
            scanf("%d", &loopMain);
            if(loopMain!=1&&cont!=0){
            	printf("\nDeseja ir para o carrinho? (s - sim / n - não) ");
            	fflush(stdin);
            	scanf("%c", &testeCarrinho);
            	fflush(stdin);
			}
            system("cls");
            if(testeCarrinho!='s'){
		   		break;
		  // Carrinho
		
		  // Exebição de produto
		  case 2:
		  	system("cls");
		    do{
                do{
		  		testeCarrinho=0;
                dnv=0;
                loopLista=0;
                loopCat=0;
                loopVoltar=0;
                novamente=0;
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
                printf("----> Voltar\n\n");
                printf("----> Sair\n\n");
                printf("(°-°) - Qual Categoria de produto você deseja?\n");
                gets(escolhacat);
                fflush(stdin);
                system("cls");
                if(strcmp(escolhacat,"celulares")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"celulares")==0){                        
                          printf("\n\t%s \n\t%s \n\tR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                          printf("\t-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"informatica")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"informatica")==0){
                            printf("\n\t%s \n\t%s \n\tR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("\t-------------\n");
                        }
                } 
            }
                else if(strcmp(escolhacat,"eletrodomesticos")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"eletrodomesticos")==0){
                            printf("\n\t%s \n\t%s \n\tR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("\t-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"moveis")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"moveis")==0){
                            printf("\n\t%s \n\t%s \n\tR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("\t-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"brinquedos")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"brinquedos")==0){
                            printf("\n\t%s \n\t%s \n\tR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("\t-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"tv")==0){
                    for(i=0;i<=sizeof(produto[i]);i++){
                        if(strcmp(produto[i].categoria,"tv")==0){
                            printf("\n\t%s \n\t%s \n\tR$%2.f \n",produto[i].nome,produto[i].categoria,produto[i].valor);
                            printf("\t-------------\n");
                        }
                }
            }
                else if(strcmp(escolhacat,"sair")==0){
                    return 0;
            }
            else if(strcmp(escolhacat,"voltar")==0){
                    loopVoltar = 1;
                    loopMain = 1;
                    loopCat = 0;
            }
                else{
                    printf("Opção inválida\n");
                    printf("(°-°) - Deseja  tentar novamente? (s - sim / n - não) ");
                    scanf("%c",&dnv);
                    fflush(stdin);
                    if(dnv=='s'||dnv=='S'){
						system("cls");
                    	loopCat = 1;
                	}
					else
                    	return 0;
                
                }
            }while(loopCat==1);
                if(loopVoltar!=1){
                //busca por nome
                printf("\n(°-°) -  Deseja adicionar algum produto ao carrinho? (s - sim / n - não) ");
                scanf("%c",&car);
                fflush(stdin);
                
                if(car=='s'||car=='S'){
                    printf("\n(°-°) - Qual produto você irá adicionar ao carrinho? \n");
                    gets(prodp);
                    fflush(stdin);
               		p=0;
					para=0;
		    		while(para!=3){ 
                        if (strcmp(prodp, produto[p].nome) == 0 || strcmp(prodp, produto[p].nomec) == 0 || strcmp(prodp, produto[p].nomec2) == 0 || strcmp(prodp, produto[p].nomec3) == 0) {
                        	printf("\n\t%s", produto[p].nome);
                        	printf("\n\t%s", produto[p].categoria);
                        	printf("\n\t%.2f", produto[p].valor);
                        	printf("\n\n(°-°) - Produto adicionado com sucesso!\n");
                        	para = 3;
                        	cont++;
							for (z = cont-1;z<cont;z++){
		    					Pcont[z] = p;	
								valorFinal += produto[p].valor;
							}
                        }
                        else {
                        	p++;
    							if(p==51){
    								printf("\nOpção inválida\n");
    								para = 3;
    							}
    							
							}
                	}   
                }
            		printf("\n(°-°) - Deseja continuar comprando? (s - sim / n - não) ");
            		scanf("%c", &loopLista);
            		fflush(stdin);
            		if(loopLista!='s'&&cont!=0){
            			printf("\n(°-°) - Deseja ir para o carrinho? (s - sim / n - não) ");
            			scanf("%c", &testeCarrinho);
            			fflush(stdin);
            		}
					system("cls");
            	
            	fflush(stdin);
            }
                } while(loopLista=='s'||loopLista=='S');
            if(testeCarrinho!='s')
				break;

    }
		case 3:
			printf(
 "\t  ____                _       _           \n"
 "\t / ___|__ _ _ __ _ __(_)_ __ | |__   ___  \n"
 "\t| |   / _` | '__| '__| | '_ \\| '_ \\ / _ \\ \n"
 "\t| |__| (_| | |  | |  | | | | | | | | (_) |\n"
 "\t \\____\\__,_|_|  |_|  |_|_| |_|_| |_|\\___/ \n\n"
			);
		    
		    if (cont==0){
		    	printf("(°-°) - O carrinho de compras está vazio! Adicione algum produto primeiro.\n");
                printf("\n(°-°) - Se deseja continuar comprando digite 1: ");
                scanf("%d", &loopMain);
                system("cls");
			} else {

				do{
					printf("Carrinho de compras \n\n");
					
					for (g=0;g<z;g++){
	                    j = Pcont[g];
						printf("-----------------\n");
						printf("%s\n", produto[j].nome);
						printf("%s\n", produto[j].categoria);
						printf("R$%.2f\n", produto[j].valor);
						
					}
	                
					loopPag=0;
					confirpag=0;
					printf("\n--------------------\n");
	                printf("Valor Total: R$%.2f\n", valorFinal);   
	                printf("--------------------\n");
		            printf("\n(°-°) - Escolha uma opção:\n1 - Continuar Comprando\n2 - Finalizar compra\n\n");
		            scanf("%d", &escolhaFinal);		
		            system("cls");
					
			        if(escolhaFinal == 2){
						printf("A mercadoria será entregue no endereço: %s, N° %s - %s, %s\n%s\n\n", Ce_rua, Ce_numres, Ce_bairro, Ce_cidade, Ce_comp);
						printf("O endereço está correto? (s - sim / n - não) ");
						fflush(stdin);
						scanf("%s", &esc_end);
						fflush(stdin);
						system("cls");
						
						if(esc_end == 'N' || esc_end == 'n'){
							printf("Aperte qualquer tecla para cadastrar o endereço novamente.");
							getch();
							system("cls");
							printf("---------------------\n");
							printf("\tCADASTRO DE ENDEREÇO\n");
							printf("Digite nome da rua: ");
							gets(Ce_rua);
							fflush(stdin);
							printf("Digite o bairro: ");
							gets(Ce_bairro);
							fflush(stdin);
							printf("Digite o nome da cidade: ");
							gets(Ce_cidade);
							fflush(stdin);
							printf("Digite o número da residência: ");
							gets(Ce_numres);
							fflush(stdin);
							printf("Complemento? (Aperte enter para pular)\n");
							gets(Ce_comp);
							fflush(stdin);
							printf("Cadastro concluído! Pressione qualquer tecla.");
							getch();
							fflush(stdin);
							system("cls");
							loopPag = 1;
							loopMain = 1;
							
						}else {
							printf("\n\n(°-°) - Qual o método de pagamento?\n");
							printf("01 - Pix\n");
							printf("02 - Crédito\n");
							printf("03 - Débito\n");
							scanf("%d", &pgto);
							system("cls");
							
							if (pgto == 1){
								printf("Nossa chave pix: 76161492220\n\n");
								loopMain = 0;
								confirpag = 1;
							}else if (pgto == 2 || pgto == 3){
								printf("Digite o número do cartão\n");
								scanf("%d", &numCard);
								fflush(stdin);
								printf("Digite a data de validade\n");
								scanf("%s", &valCard);
								fflush(stdin);
								printf("Digite o CVV: \n");
								scanf("%d", &cvCard);
								fflush(stdin);
								loopMain = 0;
								confirpag = 1;
								system("cls");	
							} //Pagamento
							else{
								system("cls");
								printf("Opção Inválida!\n\n");
								loopPag = 1;
							
							}
						}
					}else if(escolhaFinal == 1){
						loopMain = 1;
					}else{
						printf("Opção Inválida!\n\n");
						loopPag=1;
					}
				} while(loopPag==1);
			}
		    break;
            
        case 04:
				do{
				
				printf("  __  __                                _     ____        _\n "
				"|  \\/  |                              | |   |  _ \\      | |\n"
				" | \\  / | __ _ _ __ __ _  __ _ _ __ ___| |_  | |_) | ___ | |_\n"
				" | |\\/| |/ _` | '__/ _` |/ _` | '__/ _ \\ __| |  _ < / _ \\| __|\n"
				" | |  | | (_| | | | (_| | (_| | | |  __/ |_  | |_) | (_) | |_\n"
				" |_|  |_|\\__,_|_|  \\__, |\\__,_|_|  \\___|\\__| |____/ \\___/ \\__|\n"
				  "                    __/ |  \n"                                   
				  "                   |___/   \n\n\n"  );
					printf("Converse com a Margaret\n");
					printf("Para voltar ao menu digite 'voltar'\n");
					printf("Para fechar o programa digite 'fechar'\n");
					printf("Para limpar a tela digite 'limpar'\n\n");
					a=1;
					b=1;
					do{
						
						printf(":");
						gets(fala);
						fflush(stdin);
					
						if(strcmp(fala,"oi")==0||strcmp(fala,"ola")==0||strcmp(fala,"eae")==0){
							printf("(°-°) - Olá\n");
						}
							
						else if(strcmp(fala,"tudo bem")==0||strcmp(fala,"como vai")==0||strcmp(fala,"bao")==0){
							printf("(°-°) - bao uai\n");
						}
						
						else if(strcmp(fala,"menu")==0||strcmp(fala,"como voltar")==0||strcmp(fala,"voltar menu")==0){
							printf("(°-°) - Para voltar ao menu digite 'voltar'\n");
						}
						
						else if(strcmp(fala,"cadastro")==0||strcmp(fala,"cadastrar")==0||strcmp(fala,"como cadastrar")==0){
							printf("(°-°) - A opção de cadastro está disponível apenas ao entrar no site\n");
						}
						
						else if(strcmp(fala,"login")==0||strcmp(fala,"como logar")==0||strcmp(fala,"logar")==0){
							printf("(°-°) - A opção de login só aparece ao entrar no site. Não se preocupe, Você já logou!\n");
						}
						
						else if(strcmp(fala,"voltar")==0){
							a=9;
							b=9;
							loopMain = 1;
							system("cls");
						}
						
						else if(strcmp(fala,"como comprar")==0||strcmp(fala,"quero comprar")==0||strcmp(fala,"pesquisa")==0||strcmp(fala,"como pesquisa")==0||strcmp(fala,"como pesquisar")==0||strcmp(fala,"busca")==0||strcmp(fala,"buscar")==0||strcmp(fala,"pesquisar")==0){
							printf("(°-°) - No menu inicial selecione a 'buscar um produto' \n");
						}
						else if(strcmp(fala,"bom dia")==0||strcmp(fala,"boa tarde")==0||strcmp(fala,"boa noite")==0){
							printf("(°-°) - %s\n",fala);
						}
						
						else if(strcmp(fala,"carrinho")==0||strcmp(fala,"como ver meu carrinho")==0||strcmp(fala,"meu carrinho")==0||strcmp(fala,"onde fica o carrinho")==0||strcmp(fala,"meus produtos")==0||strcmp(fala,"carrinho de compras")==0||strcmp(fala,"carrinho de compra")==0){
							printf("(°-°) - Você pode vizualizar o carrinho selecionando a 3° opção do menu 'Carinho de compras' \n");
						}
						
						else if(strcmp(fala,"categoria")==0||strcmp(fala,"categorias")==0||strcmp(fala,"lista produtos")==0||strcmp(fala,"lista de produtos")==0||strcmp(fala,"produtos")==0||strcmp(fala,"lista")==0||strcmp(fala,"listar")==0){
							printf("(°-°) - Selecionando a 2° Opção do menu 'Lista de produtos' irá exibir produtos por categorias \n");
						}
							
						else if(strcmp(fala,"do que voce gosta")==0||strcmp(fala,"oque voce quer")==0){
							printf("(°-°) - codigos binários \n");
						}
						
						else if(strcmp(fala,"limpar")==0){
							a=9;
							system("cls");	
					}
						else if(strcmp(fala,"lixo")==0){
							printf("(°-°) - mama \n");
						}
						
						else if(strcmp(fala,"fechar")==0){
							a=9;
							b=9;
							loopMain = 0;
							system("cls");
						}
						else{
							printf("(°-°) - Desculpa, não entendi\n");
						}
						
				}while(a==1);
			}while (b==1);
			break;
		case 5: 
			return 0;
		default:
			printf("Opção Inválida!\n\n");
			printf("Digite 1 para tentar novamente: ");
			scanf("%d", &loopMain);
			system("cls");
        }//Fim do switch da escolha principal   
	}while(loopMain == 1);//Fim do loop principal
	if(confirpag==1){
		printf("A entrega será efetuada após a detecção do pagamento\n");
		printf("Valor total da compra: R$%.2f\n", valorFinal);
		printf("\n(°-°) AMERITEX agradece sua preferência!");
	} SetConsoleOutputCP(CPAGE_DEFAULT);
}

