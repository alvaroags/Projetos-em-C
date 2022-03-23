#include<stdio.h>
#include<locale.h>
#include<windows.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP;
    SetConsoleOutputCP(CPAGE_UTF8);
    int a, b, c;
    printf("\tVERIFICAÇÃO DE EXISTENCIA DE TRIANGULOS\n");
    printf("DIGITE TRES VALORES: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a==0 || b==0 || c==0){
        printf("NÃO É PERMITIDO NÚMEROS NEGATIVOS");
    } else if(a>=b+c || b>=a+c || c>=b+a){
        printf("TRIANGULO NÃO EXISTENTE");
    } else if (a==b && b==c){
        printf("TRIANGULO EQUILÁTERO");
    } else if(a==b || b==c || c==a){
        printf("TRIANGULO ISÓSCELES");
    } else {
        printf("TRIANGULO ESCALENO");
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}