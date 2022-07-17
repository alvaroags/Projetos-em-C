#include <stdio.h>

int main(){
    int i, cpf[11], x;
    scanf("%d", &x);
    for (i = 0; i < 9; i++)
        cpf[i] = fmod((x / pow(10,8-i)), 10);
    validacpf(cpf);
}
void validacpf(int cpf[11]){
    int i, soma, x=9, j;
    for(j=0;j<2;j++){
        soma=0;
        for(i=0;i<x;i++)
            soma += cpf[i] * ((x+1)-i);
        if(soma%11<2)
            cpf[x] = 0;
        else
            cpf[x] = 11-(soma%11);
        x++;
    }
    for(i=0;i<11;i++)
        printf("%d", cpf[i]);
}