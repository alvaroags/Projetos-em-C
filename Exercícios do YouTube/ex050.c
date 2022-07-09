#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    char sexo;
    int idade;
} Pessoa;

int main(){
    Pessoa pessoa;
    printf("Digite seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);
    printf("Digite seu sexo: ");
    scanf("%c", &pessoa.sexo);
    printf("Nome: %s\nIdade: %d\nSexo: %c", pessoa.nome, pessoa.idade,pessoa.sexo);
}