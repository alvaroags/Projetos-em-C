#include <stdio.h>
int main()
{
    int x = 50, *ptx, **pptx;
    *ptx = &x;
    **pptx = &ptx;
    printf("%d", *&ptx);
}