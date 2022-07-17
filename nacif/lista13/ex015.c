#include <stdio.h>
#include <math.h>

float distancia(int[2][3]);
int main()
{
    int i, j, matrix[2][3];
    float d;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%.2f", distancia(matrix));
}
float distancia(int matrix[2][3])
{
    float d;
    d = sqrt(pow(matrix[1][0] - matrix[0][0], 2) + pow(matrix[1][1] - matrix[0][1], 2) + pow(matrix[1][2] - matrix[0][2], 2));
    return d;
}