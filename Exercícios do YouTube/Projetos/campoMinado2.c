#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int bomba;
    int aberta;
    int vizinhos;
} Casas;
int tam = 10, l, c, i, x, derrota = 0, linha, coluna;
Casas jogo[10][10];

void zerarJogo()
{
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < tam; c++)
        {
            jogo[l][c].bomba = 0;
            jogo[l][c].aberta = 0;
            jogo[l][c].vizinhos = 0;
        }
    }
}
void sorteioBombas()
{
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        l = rand() % 10;
        c = rand() % 10;
        if (jogo[l][c].bomba == 0)
            jogo[l][c].bomba = 1;
        else
            i--;
    }
}
void imprimiJogo()
{
    printf("\n\n\t\t\t\tCAMPO MINADO\n\n\n\t    ");
    for (l = 0; l < tam; l++)
    {
        printf(" %d ", l);
        if (l != (tam - 1))
            printf(" | ");
    }
    printf("\n");
    for (l = 0; l < tam; l++)
    {
        printf("\t  ");
        for (i = 0; i < (tam * 6.1); i++)
            printf("-");
        printf("\n");
        printf("\t%d | ", l);
        for (c = 0; c < tam; c++)
        {
            if (jogo[l][c].aberta == 0)
                printf("   ");
            else
                printf(" %d ", jogo[l][c].vizinhos);
            printf(" | ");
        }
        printf("\n");
    }
}
int coordernadaValida(int l, int c){
    if(l>=0 && l < tam && c>=0 && c<tam)
        return 1;
    else
        return 0;
}
void procuraBombaVizinhos(){
    for(l=0;l<tam;l++){
        for(c=0;c<tam;c++){
            if(coordernadaValida(l-1, c-1) && jogo[l-1][c-1].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l-1, c) && jogo[l-1][c].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l-1, c+1) && jogo[l-1][c+1].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l, c-1) && jogo[l][c-1].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l, c) && jogo[l][c].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l, c+1) && jogo[l][c+1].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l+1, c-1) && jogo[l+1][c-1].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l+1, c) && jogo[l+1][c].bomba)
                jogo[l][c].vizinhos++;
            if(coordernadaValida(l+1, c+1) && jogo[l+1][c+1].bomba)
                jogo[l][c].vizinhos++;
        }
    }
}
void abreCasas(){
    if(jogo[linha][coluna].vizinhos==0){


    }
}
void procuraBomba()
{   
    jogo[linha][coluna].aberta = 1;
    if (jogo[linha][coluna].bomba == 1)
        derrota = 1;
    else
        
        imprimiJogo();
}
int main()
{
    zerarJogo();
    sorteioBombas();
    imprimiJogo();
    procuraBombaVizinhos();
    while (derrota == 0)
    {
        printf("\nDIGITE A LINHA: ");
        scanf("%d", &linha);
        printf("\nDIGITE A COLUNA: ");
        scanf("%d", &coluna);
        if (jogo[linha][coluna].aberta == 0){
            system("cls");
            procuraBomba();
        }
        else
            printf("\nCASA JA ESCOLHIDA\n");
    }
}