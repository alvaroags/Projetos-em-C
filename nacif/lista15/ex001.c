#include <stdio.h>

int main()
{
    int lado;
    scanf("%d", &lado);
    imprimiQuadrado(lado, lado);
}
void imprimiQuadrado(int lado, int altura)
{
    int i;
    for (i = 0; i < lado; i++)
        printf("* ");
    printf("\n");
    altura--;
    if (altura == 0)
        return 0;
    else
        imprimiQuadrado(lado, altura);
}