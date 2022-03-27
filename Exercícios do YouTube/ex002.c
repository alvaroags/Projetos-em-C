//exercicio de troca de variaveis sem variavel adicional
#include <stdio.h>
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("VALOR INSERIDO DE A = %d", a);
    printf("\nVALOR INSERIDO DE B = %d", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNOVO VALOR DE A = %d", a);
    printf("\nNOVO VALOR DE B = %d", b);
    
}