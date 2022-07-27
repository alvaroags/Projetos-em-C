#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fatorial(num));
}
int fatorial(int num){
    if (num==1)
        return 1;
    else
        num = fatorial(num - 1) * num;
    return num;
}