#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double deltaMain;
    scanf("%d %d %d", &a, &b, &c);
    deltaMain = delta(a, b, c);
    printf("X1 = %.1lf\nX2 = %.1lf", raiz1(a, b, deltaMain), raiz2(a, b, deltaMain));
}
double delta(int a, int b, int c){
    return (b * b) - (4 * a * c);
}
double raiz1(int a, int b, double delta){
    return (-b + sqrt(delta)) / (2 * a);
}
double raiz2(int a, int b, double delta){
    return (-b - sqrt(delta)) / (2 * a);
}