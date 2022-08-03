#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char letra[5][7];
    for (i = 0; i < 5; i++)
        strcpy(letra[i], "0");
    for (i = 0; i < 5; i++)
        printf("%s\n", letra[i]);
    for (i = 0; i < 4; i++)
        strcpy(letra[i], "alvaro");
    for (i = 0; i < 5; i++)
        printf("%s\n", letra[i]);
}