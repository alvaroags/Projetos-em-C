#include <stdio.h>

int main()
{
    int i, num1, num2, soma = 0;
    scanf("%d %d", &num1, &num2);
    i=num1;
    while (i != num2)
    {
        if (i!=num1&&(i % 2) != 0)
            soma += i;
        i--;
    }
    printf("%d", soma);
}