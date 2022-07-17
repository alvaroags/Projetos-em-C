#include <stdio.h>
#include <math.h>
int moedas(float);
int main()
{
    int x;
    float valor, pagamento, troco;
    scanf("%f %f", &pagamento, &valor);
    troco = pagamento - valor;
    x = moedas(troco);
    printf("O troco = %.0f de %d", (troco / x), x);
}
int moedas(float troco)
{
    int i, moedas[6] = {50, 20, 10, 5, 2, 1};
    for (i = 0; i < 6; i++)
    {
        if (fmod(troco, moedas[i]) == 0)
        {
            return moedas[i];
        }
    }
}