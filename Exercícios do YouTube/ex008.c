//exercicio que mostra se o numero é divisil por 2, 3 ou 5
#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP;
    SetConsoleOutputCP(CPAGE_UTF8);
    int ent;
    printf("DIGITE UM NUMERO INTEIRO ");
    scanf("%d", &ent);
    if(ent%2==0 || ent%3==0 || ent%5==0){
        printf("%d É DIVISÍVEL POR 2, 3 OU 5", ent);
    } else{
        printf("%d NÃO É DIVISÍVEL POR 2, 3, OU 5", ent);
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}