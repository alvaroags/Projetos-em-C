#include <stdio.h>
#include <math.h>

float area(int, int, int);
int main(){
    int l1, l2, l3; 
    float x;
    scanf("%d %d %d", &l1, &l2, &l3);
    x = area(l1, l2, l3);
    printf("%.2f", x);
}
float area(int l1, int l2, int l3){
    float p, x;
    p = (l1 + l2 + l3) / 2;
    x = sqrt(p*((p-l1)*(p-l2)*(p-l3)));
    return x;
}