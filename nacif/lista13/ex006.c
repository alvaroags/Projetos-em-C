#include <stdio.h>

double media(int, int, int);

int main()
{
    int num1, num2, num3, x;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Nota = %lf", media(num1, num2, num3));
}
double media(int num1, int num2, int num3)
{
    float media;
    media = (num1 + num2 + num3) / 3;
    return media;
}