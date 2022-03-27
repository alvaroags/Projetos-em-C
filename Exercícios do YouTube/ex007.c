//exercicio que informa quantos numeros positivos e negativos a pessoa digitou
#include <stdio.h>
#include <locale.h>
#include <windows.h>

typedef struct automatico {
    int num;
} automatic;

int main(){
    automatic id[5];
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int i, neg, pos;
    neg = 0;
    pos = 0;
    printf("DIGITE CINCO NÚMEROS INTEIROS: ");
    for(i=1;i<=5;i++){    
        scanf("%d", &id[i].num);
        fflush(stdin);
        if (id[i].num<0){
            neg = ++neg;
        }
        else{
            pos = ++pos;
        }      
    }
    printf("NÚMEROS POSITIVOS: %d\nNÚMEROS NEGATIVOS: %d", pos, neg);
    SetConsoleOutputCP(CPAGE_DEFAULT);
}