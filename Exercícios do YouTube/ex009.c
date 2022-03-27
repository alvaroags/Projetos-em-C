#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP;
    SetConsoleOutputCP(CPAGE_UTF8);
    int mes;
    printf("DIGITE O NUMERO DE UM MÊS: ");
    scanf("%d", &mes);
    switch (mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("ESSE MÊS TEM 31 DIAS");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("ESSE MÊS TEM 30 DIAS");
        break;
    case 2:
        printf("ESSE MÊS TEM 28 DIAS");
        break;
    default:
        printf("MÊS INVÁLIDO");
        break;
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}