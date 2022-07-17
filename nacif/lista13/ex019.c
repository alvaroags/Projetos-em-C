#include <stdio.h>

int main()
{
    int i, vet[5];
    for (i = 0; i < 5; i++)
        scanf("%d", &vet[i]);
    printf("%d", somavet(vet));
}
int somavet(int vet[5])
{
    int i, soma = 0;
    for (i = 0; i < 5; i++)
        soma += vet[i];
    return soma;
}