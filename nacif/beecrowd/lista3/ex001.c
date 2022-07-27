#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], cont;
    scanf("%s", string);
    cont = cont1(string);
    if(cont%2==0)
        printf("%s0", string);
    else
        printf("%s1", string);
}
int cont1 (char string[100]){
    int i, cont=0;
    for(i=0;i<strlen(string);i++){
        if(string[i]=='1')
            cont++;
    }
    return cont;
}