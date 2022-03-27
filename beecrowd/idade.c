#include <stdio.h>
 
int main() {
 
    int ent, ano, mes, dia;
    scanf("%d", &ent);
    ano = ent / 365;
    mes = ent % 365 / 30;
    dia = ent % 365 % 30;
    printf("\n%d ano (s)", ano);
    printf("\n%d mes (es)", mes);
    printf("\n%d dia (s)\n", dia);
 
    return 0;
}