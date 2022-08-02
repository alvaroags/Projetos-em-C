#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numBits, i = 0, erro, salvaOP,  loop;
    char operacao[20], num1[1000], num2[1000], *x[10];
    char verificaOP[6][10] = {"OR", "AND", "XOR", "NAND", "NOR", "MOR"};
    scanf("%d", &numBits);
    fflush(stdin);
    fgets(num1, numBits + 1, stdin);
    fflush(stdin);
    fgets(num2, numBits + 1, stdin);
    fflush(stdin);
    fgets(operacao, 20, stdin);
    fflush(stdin);
    x[i] = strtok(operacao, " \n");
    while (x[i])
    {
        i++;
        x[i] = strtok(NULL, " \n");
    }
    erro = verificaErro(numBits, num1, num2);
    if (erro == 1)
        printf("ERRO");
    else
    {
        if(x[3]!=NULL)
            loop = 0;
        else    
            loop = 2;
        do{
            for (i = 0; i < 6; i++)
                if (strcmp(x[1], verificaOP[i])==0)
                    salvaOP = i;
            switch (salvaOP)
            {
            case 0:
                funcao_OR(numBits, num1, num2);
                break;
            case 1:
                funcao_AND(numBits, num1, num2);
                break;
            case 2:
                funcao_XOR(numBits, num1, num2);
                break;
            case 3:
                funcao_AND(numBits, num1, num2);
                funcao_NOT(numBits, num1);
                break;
            case 4:
                funcao_OR(numBits, num1, num2);
                funcao_NOT(numBits, num1);
                break;
            case 5:
                funcao_NOT(numBits, num1);
                funcao_OR(numBits, num1, num2);
                break;
            }
            loop++;
        } while(loop<2);
        printf("%s", num1);
    }
}
int verificaErro(int tamanho, char num1[], char num2[])
{
    for (int i = 0; i < tamanho; i++)
        if ((num1[i] != '0' && num1[i] != '1'))
            return 1;
}
void funcao_AND(int tamanho, char *num1, char *num2)
{
    for (int i = 0; i < tamanho; i++)
        if (num1[i] != num2[i])
            num1[i] = '0';
}
void funcao_OR(int tamanho, char *num1, char *num2)
{
    for (int i = 0; i < tamanho; i++)
        if (num1[i] == '1' || num2[i] == '1')
            num1[i] = '1';
}
void funcao_XOR(int tamanho, char *num1, char *num2)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (num1[i] != num2[i])
            num1[i] = '1';
        else
            num1[i] = '0';
    }
}
void funcao_NOT(int tamanho, char *num1)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (num1[i] == '1')
            num1[i] = '0';
        else
            num1[i] = '1';
    }
}
