#include <stdio.h>

int main (){
    int FUNC, HRS;
    double CUSTO, SALARIO;
    scanf("%d %d %lf", &FUNC, &HRS, &CUSTO);
    SALARIO = HRS * CUSTO; 
    printf("NUMBER = %d\n", FUNC);
    printf("SALARY = U$ %.2lf\n", SALARIO);

    return 0;
}