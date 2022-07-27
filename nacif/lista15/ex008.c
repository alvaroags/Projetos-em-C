#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", div(x, y));
}
int div(int x, int y)
{
    if (x < y)
        return 0;
    else if (x == y)
        return 1;
    else
        return 1 + div(x - y, y);
}