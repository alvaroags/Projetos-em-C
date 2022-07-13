#include <stdio.h>
int main()
{
    float cFabrica;
    scanf("%f", &cFabrica);
    printf("%.2f", (cFabrica * 0.28) + (cFabrica * 0.45) + cFabrica);
}