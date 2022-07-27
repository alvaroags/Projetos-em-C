#include <stdio.h>

int main()
{
    int i, voto, contVoto = 0;
    float pessoas;
    while(scanf("%f", &pessoas)!= EOF){
        for (i = 0; i < pessoas; i++)
        {
            scanf("%d", &voto);
            if (voto == 1)
                contVoto++;
        }
        if (contVoto >= ((2 * pessoas) / 3))
            printf("impeachment");
        else
            printf("acusacao arquivada");
    }
}