#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(){
    char palavras[50];
    int diferente=0, tam, i, x;
    printf("DIGITE UMA PALAVRA: ");
    gets(palavras);
    tam = strlen(palavras);
    tam--;
    x = tam;
    for(i=0;i<=tam;i++){
        if(palavras[i]==palavras[x])
            x--;
        else if(palavras[x]==' '){
            x--;
            i--;
        }
        else if(palavras[i]==' ')
            i=i;
        else    
            diferente++;
    }
    if(diferente==0)
        printf("\nA PALAVRA EH PALINDROMA");
    else
        printf("\nA PALAVRA NAO EH PALINDROMA");
}