#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i + 1));
}
int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}