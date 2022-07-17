#include <stdio.h>

int horas_minutos(int);
int minutos_segundos(int, int);
int main()
{
    int horas, minutos, segundos;
    scanf("%d %d %d", &horas, &minutos, &segundos);
    printf("%d", (segundos + minutos_segundos(minutos, horas)));
}
int minutos_segundos(int minutos, int horas)
{
    return (minutos + horas_minutos(horas)) * 60;
}
int horas_minutos(int horas)
{
    return horas * 60;
}