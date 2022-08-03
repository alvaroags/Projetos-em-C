#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaErro(int tamanho, char num1[], char num2[])
{
    int tam1, tam2;
    for (int i = 0; i < tamanho; i++)
    {
        if ((num1[i] != '0' && num1[i] != '1') || (num2[i] != '0' && num2[i] != '1'))
            return 1;
    }
    tam1 = strlen(num1);
    tam2 = strlen(num2);
    if (tam1 != tamanho)
        return 1;
    if (tam2 != tamanho)
        return 1;
    return 0;
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
int main()
{
    int numBits, i = 0, erro, salvaOP, loop, help = 1;
    char operacao[20], num1[1000], num2[1000], *x, str1[1000], str2[1000], str3[1000], matrix[10][10];
    char verificaOP[6][10] = {"OR", "AND", "XOR", "NAND", "NOR", "MOR"};
    for (i = 0; i < 10; i++)
        strcpy(matrix[i], "0");
    scanf("%d", &numBits);
    if (numBits > 1000)
    {
        printf("ERRO\n");
        return 0;
    }
    fflush(stdin);
    scanf("%s", num1);
    fflush(stdin);
    scanf("%s", num2);
    fflush(stdin);
    fgets(operacao, 20, stdin);
    fflush(stdin);
    x = strtok(operacao, " \n");
    i = 0;
    while (x)
    {
        strcpy(matrix[i], x);
        x = strtok(NULL, " \n");
        i++;
    }
    if (strcmp(matrix[3], "0") == 0)
        loop = 2;
    else
        loop = 0;
    if (strcmp(matrix[0], "S1") == 0)
        strcpy(str1, num1);
    else
        strcpy(str1, num2);
    if (strcmp(matrix[2], "S1") == 0)
        strcpy(str2, num1);
    else
        strcpy(str2, num2);
    if (strcmp(matrix[3], "0") != 0)
    {
        if (strcmp(matrix[4], "S1") == 0)
            strcpy(str3, num1);
        else
            strcpy(str3, num2);
    }
    erro = verificaErro(numBits, str1, str2);
    if (erro == 1)
        printf("ERRO");
    else
    {
        do
        {
            salvaOP = 99;
            for (i = 0; i < 6; i++)
                if (strcmp(matrix[help], verificaOP[i]) == 0)
                    salvaOP = i;
            if (salvaOP == 99)
            {
                printf("ERRO");
                return 0;
            }
            switch (salvaOP)
            {
            case 0:
                funcao_OR(numBits, str1, str2);
                break;
            case 1:
                funcao_AND(numBits, str1, str2);
                break;
            case 2:
                funcao_XOR(numBits, str1, str2);
                break;
            case 3:
                funcao_AND(numBits, str1, str2);
                funcao_NOT(numBits, str1);
                break;
            case 4:
                funcao_OR(numBits, str1, str2);
                funcao_NOT(numBits, str1);
                break;
            case 5:
                funcao_NOT(numBits, str1);
                funcao_OR(numBits, str1, str2);
                break;
            }
            strcpy(str2, str3);
            help += 2;
            loop++;
        } while (loop < 2);
        printf("%s", str1);
    }
}
