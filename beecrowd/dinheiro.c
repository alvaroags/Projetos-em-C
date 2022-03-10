#include <stdio.h>
int main() {
    double valor, vintec, dezc, cincoc, umc;
    int cem, cinquenta, vinte, dez, cinco, dois, um, cinquentac, vintec, dezc, cincoc, umc;
    scanf("%lf", &valor);
    cem = valor/100;
    cinquenta = valor%100 / 50;
    vinte = valor%100%50 / 20;
    dez = valor%100%50%20 / 10;
    cinco = valor%100%50%20%10 / 5;
    dois = valor%100%50%20%10%5 / 2;
    um = valor%100%50%20%10%5%2 / 1;
    cinquentac = valor%100%50%20%10%5%2%1 / 0.5;
    vintec = valor%100%50%20%10%5%2%1%0.5 / 0.25;
    dezc = valor%100%50%20%10%5%2%1%0.5%0.25 / 0.1;
    cincoc = valor%100%50%20%10%5%2%1%0.5%0.25%0.1 / 0.05;
    umc = valor%100%50%20%10%5%2%1%0.5%0.25%0.1%0.05 / 0.01;
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d moeda(s) de R$ 1,00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinquentac);
    printf("%lf moeda(s) de R$ 0.25\n", vintec);
    printf("%lf moeda(s) de R$ 0.10\n", dezc);
    printf("%lf moeda(s) de R$ 0.05\n", cincoc);
    printf("%lf moeda(s) de R$ 0.01\n", umc);
}