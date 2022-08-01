#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numBits, i = 0, erro;
    char operacao[20], num1[1000], num2[1000], *x[10];
    scanf("%d", &numBits);
    fflush(stdin);
    fgets(num1, numBits + 1, stdin);
    fflush(stdin);
    fgets(num2, numBits + 1, stdin);
    fflush(stdin);
    fgets(operacao, 20, stdin);
    x[i] = strtok(operacao, " ");
    while (x[i])
    {
        i++;
        x[i] = strtok(NULL, " ");
    }
    funcaoAND(numBits, num1, num2);
    printf("%s", x[3]);
    /*erro = verificaErro(numBits, num1, num2);
    if (erro == 1)
        printf("erro");
    else
        printf("ok");*/
}
int verificaErro(int tamanho, char num1[], char num2[])
{
    int i, erro;
    for (i = 0; i < tamanho; i++)
        if ((num1[i] != '0' && num1[i] != '1') || (num2[i] != '0' && num2[i] != '1'))
            erro = 1;
    return erro;
}
void funcaoAND(int tamanho, char *num1, char *num2)
{
    int i;
    for (i = 0; i < tamanho; i++)
        if (num1[i] != num2[i])
            num1[i] = '0';
}
