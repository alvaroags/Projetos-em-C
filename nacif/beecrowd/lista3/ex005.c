#include <stdio.h>

int main(){
    int i, qt, garrafas, promo;
    scanf("%d", &qt);
    for(i=0;i<qt;i++){
        scanf("%d %d", &garrafas, &promo);
        printf("%d\n", (garrafas/promo) + (garrafas%promo));
    }
}