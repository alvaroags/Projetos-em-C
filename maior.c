#include <stdio.h>
#include <stdlib.h>

int main (){
    int A, B, C, maiorab, maiorabc;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    maiorab = (A + B + (abs(A - B))) / 2;
    maiorabc = (maiorab + C + (abs(maiorab - C))) / 2;

    printf("%d eh o maior", maiorabc);
}