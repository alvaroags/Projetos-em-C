#include <stdio.h>

int main()
{
    int i, qt, num, in = 0, out = 0;
    scanf("%d", &qt);
    for (i = 0; i < qt; i++)
    {
        scanf("%d", &num);
        if (num >= 10 && num <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
}