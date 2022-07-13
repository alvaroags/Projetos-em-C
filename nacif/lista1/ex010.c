#include <stdio.h>

int main()
{
    int i, n, soma=0;
    scanf("%d", &n);
    int vetor[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            soma += vetor[i];
    }
    printf("%d ", soma);
    return 0;
}