#include <stdio.h>

int main(){
    int n, horas, min, seg;
    scanf("%d", &n);
    horas = n/3600;
    min = n%3600/60;
    seg = n%3600%60;
    printf("%d:%d:%d", horas, min, seg);
}