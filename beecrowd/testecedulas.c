#include <stdio.h>
int main() {
    int valor, troco, cem, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%d", &valor);
    cem = valor/100;
    cinquenta = valor%100 / 50;
    vinte = valor%100%50 / 20;
    dez = valor%100%50%20 / 10;
    cinco = valor%100%50%20%10 / 5;
    dois = valor%100%50%20%10%5 / 2;
    um = valor%100%50%20%10%5%2 / 1;
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;
}