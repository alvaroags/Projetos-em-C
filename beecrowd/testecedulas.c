#include <stdio.h>
int main() {
    int valor, troco, cem, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%d", &valor);
    cem = valor/100;
    troco = valor%100;
    cinquenta = troco/50;
    troco = troco%50;
    vinte = troco/20;
    troco = troco%20;
    dez = troco/10;
    troco = troco%10;
    cinco = troco/5;
    troco = troco%5;
    dois = troco/2;
    troco = troco%2;
    um = troco/1;
    printf("%d nota (s) de R$ 100,00\n", cem);
    printf("%d nota (s) de R$ 50,00\n", cinquenta);
    printf("%d nota (s) de R$ 20,00\n", vinte);
    printf("%d nota (s) de R$ 10,00\n", dez);
    printf("%d nota (s) de R$ 5,00\n", cinco);
    printf("%d nota (s) de R$ 2,00\n", dois);
    printf("%d nota (s) de R$ 1,00\n", um);
    return 0;
}