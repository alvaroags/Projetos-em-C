#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    multiplos(num);
}
multiplos(int num)
{

    if (num < 1)
        return 1;
    else
    {
        multiplos(num - 1);
        if ((num==1)||(num % 5 == 0))
            printf("%d ", num);
    }
}