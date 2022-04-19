#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

typedef struct 
{
    int idade;
    char nome[20];
    int telefone;
    char cidade[20];
} Cadastro;

Cadastro Cadastramento(){
    Cadastro CadastrodePessoas;
    //for(i=0;i<3;i++){
        printf("DIGITE SUA IDADE, SEU NOME, SEU TELEFONE, SUA CIDADE: ");
        scanf("%d%s%d%s", &CadastrodePessoas.idade, &CadastrodePessoas.nome, &CadastrodePessoas.telefone, &CadastrodePessoas.cidade);
    //}
    return CadastrodePessoas;
}
void ImprimiCadastro(Cadastro CadastrodePessoas){
    //for(i=0;i<3;i++){
        printf("Idade: %d\nNome: %s\nTelefone: %d\nCidade: %s\n\n", CadastrodePessoas.idade, CadastrodePessoas.nome, CadastrodePessoas.telefone, CadastrodePessoas.cidade);
    //}
}
int main(){
    Cadastro CadastrodePessoas[3];
    for(i=0;i<3;i++){
        CadastrodePessoas[i] = Cadastramento();
    }
    system("cls");
    for(i=0;i<3;i++){
       ImprimiCadastro(CadastrodePessoas[i]);
    }
}