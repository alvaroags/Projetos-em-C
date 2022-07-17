#include <stdio.h>

int menor();
int main()
{
    int x;
    x = menor();
    printf("%d", x);
}
int menor()
{
    int i, menor, num, x;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        if (num < menor || i == 0)
            menor = num;
    }
    return menor;
}