#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    scanf("%f", &num);
    if (num >= 0)
        printf("%.1f", sqrt(num));
    else
        printf("%.1f", pow(num,2));
    return 0;
}