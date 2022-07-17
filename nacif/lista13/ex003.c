#include <stdio.h>

int verificaPrimo(int);

int main()
{
    int num, x;
    scanf("%d", &num);
    x = verificaPrimo(num);
    if (x == 1)
        printf("Numero nao primo");
    else
        printf("Numero primo");
}
int verificaPrimo(int num)
{
    int x, i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0){
            x = 1;
            return x;
        }
    }
}