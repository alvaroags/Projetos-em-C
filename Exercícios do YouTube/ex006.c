//exercicio que mostra o maior e o menor de 3 numeros
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    // --------------------------------------------------------------------
    int a, b, c, maior, menor;
    printf("DIGITE UM TRÊS NUMEROS INTEIROS: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b&&b>c){
        maior = a; menor = c;}
    else if(a>c&&c>b){
        maior = a; menor = b;}
    else if(b>a&&a>c){
        maior = b; menor = c;}
    else if(b>c&&c>a){
        maior = b; menor = a;}
    else if(c>a&&a>b){
        maior = c; menor = b;}
    else {
        maior = c; menor = a;}
    printf("%d é o maior e %d é o menor", maior, menor);


    // --------------------------------------------------------------------
    SetConsoleOutputCP(CPAGE_DEFAULT);
}