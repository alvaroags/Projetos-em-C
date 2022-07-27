#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    tabuada(num, num);
}
void tabuada(int num, int tamanho)
{
    int i;
    if (num >= 1){
        tabuada(num - 1, tamanho);
        printf("%d * %d = %d\n", num, tamanho, num * tamanho);
    }
}