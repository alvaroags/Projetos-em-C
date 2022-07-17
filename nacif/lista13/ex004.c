#include <stdio.h>
#include <math.h>
int inverteNumero(int);

int main()
{
    int num, x;
    scanf("%d", &num);
    printf("%d === %d", num, inverteNumero(num));
}
int inverteNumero(int num)
{
    int x = 1, cont = 2;
    while (num != 0){
        x = x + ((num % 10) * pow(10, cont));
        num = num / 10;
        cont--;
    }
    return x;
}