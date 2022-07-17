#include <stdio.h>

int main(){
    int l1, l2, l3;
    scanf("%d %d %d", &l1, &l2, &l3);
    switch (triangulo(l1, l2, l3))
    {
    case 1:
        printf("Isosceles");
        break;
    case 2:
        printf("Equilatero");
        break;
    default:
        printf("Escaleno");
        break;
    }
}
int triangulo(int l1, int l2, int l3){
    if(l1==l2&&l1==l3)
        return 2;
    else if(l1==l2||l1==l3||l2==l3)
        return 1;
    else
        return 3;
}