#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP;
    SetConsoleOutputCP(CPAGE_UTF8);
    float nota1, nota2, nota3, result;
    char esc;
    printf("\tCALCULADOR DE MÉDIA\n");
    printf("INFORME A NOTA 1: ");
    scanf("%f", &nota1);
    printf("INFORME A NOTA 2: ");
    scanf("%f", &nota2);
    printf("INFORME A NOTA 3: ");
    scanf("%f", &nota3);
    printf("PARA MEDIA ARITMÉTICA DIGITE 'A', PARA MÉDIA PONDERADA DIGITE 'P': ");
    fflush(stdin);
    scanf("%c", &esc);
    switch(esc){
        case 'A':
        case 'a':
            result = (nota1 + nota2 + nota3) / 3;
            break;
        case 'P':
        case 'p':
            result = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / 10;
            break;
        default: 
            printf("\nOPÇÃO INVÁLIDA!");
    }
    printf("A MÉDIA É: %.2f", result);
    SetConsoleOutputCP(CPAGE_DEFAULT);
}