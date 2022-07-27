#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", Mod(x, y));
}
int Mod(int x, int y)
{
    if (x < y)
        return x;
    else if (x == y)
        return 0;
    else
        return Mod(x-y, y);
}