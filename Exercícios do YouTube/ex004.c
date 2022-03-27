#include <math.h>
int main(){
    float salario;
    salario = 45.00;
    int dias;
    printf("INFORME OS DIAS TRABALHADOS PELO ENCANADOR: ");
    scanf("%d", &dias);
    salario = salario * dias * (1 - (8.0/100));
    printf("O SALARIO DO ENCANADOR DESCONTADOS OS IMPOSTOS SAO DE: R$ %.2f", salario);
}