#include <stdio.h>

float mediaNotas(int, int, int);

int main()
{
    int nota1, nota2, nota3, i;
    float alunos[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &nota1, &nota2, &nota3);
        alunos[i] = mediaNotas(nota1, nota2, nota3);
    }
    for (i = 0; i < 3; i++)
        printf("Aluno %d = %.2f\n", i, alunos[i]);
}
float mediaNotas(int nota1, int nota2, int nota3)
{
    float x;
    x = (nota1 + nota2 + nota3) / 3;
    return x;
}