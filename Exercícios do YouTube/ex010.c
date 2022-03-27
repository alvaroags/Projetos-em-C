#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP;
    SetConsoleOutputCP(CPAGE_UTF8);
    char ent;
    printf("DIGITE UMA LETRA: ");
    scanf("%c", &ent);
    fflush(stdin);
    switch(ent){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("ESSA É UMA VOGAL");
            break;
        default:
            printf("É UMA CONSOANTE");
            break;
        }
        SetConsoleOutputCP(CPAGE_DEFAULT);
}