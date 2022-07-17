#include <stdio.h>

int main()
{
    int vet[5], i;
    for (i = 0; i < 5; i++)
        scanf("%d", &vet[i]);
    printf("%d", somaVet(vet));
}
int somaVet(int vet[5])
{
    int soma = 0, i;
    for (i = 0; i < 5; i++)
        soma += vet[i] * vet[i];
    return soma;
}