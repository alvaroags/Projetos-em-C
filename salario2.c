#include <stdio.h>

int main(){
    char nome;
    double fixo, salario;
    scanf("%s %lf", nome, &fixo);
    salario = fixo * 0.15 + fixo;
    printf("TOTAL = R$ %.2lf", salario);
    return 0;
}