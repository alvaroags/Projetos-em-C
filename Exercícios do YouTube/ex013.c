//exercicio de verificador de senhas
#include <stdio.h>
#include <stdlib.h>
int main(){
    int senha;
    printf("\tVERIFICADOR DE SENHAS\n");
    printf("DIGITE SUA SENHA: ");
    scanf("%d", &senha);
    fflush(stdin);
    while(senha!=123456){
        system("cls");
        printf("\tVERIFICADOR DE SENHAS\n");
        printf("SENHA INVALIDA\n\nDIGITE SUA SENHA: ");
        scanf("%d", &senha);
        fflush(stdin);
        system("cls");
    }
    printf("ACESSO PERMITIDO!");
}