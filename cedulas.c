int main (){
    int valor, q1, q2, q3, q4, q5, q6, q7, v2, v3, v4, v5, v6, v7;

    scanf("%d", &valor);
    q1 = valor / 100;
    v2 = valor - (q1 * 100);
    q2 = v2 / 50;
    v3 = v2 - (q2 * 50);
    q3 = v3 / 20;
    v4 = v3 - (q3 * 20);
    q4 = v4 / 10;
    v5 = v4 - (q4 * 10);
    q5 = v5 / 5;
    v6 = v5 - (q5 * 5);
    q6 = v6 / 2;
    v7 = v6 - (q6 * 2);
    q7 = v7 / 1;

    printf("\n %d nota(s) de R$ 100,00\n", q1);
    printf(" %d nota(s) de R$ 50,00\n", q2);
    printf(" %d nota(s) de R$ 20,00\n", q3);
    printf(" %d nota(s) de R$ 10,00\n", q4);
    printf(" %d nota(s) de R$ 5,00\n", q5);
    printf(" %d nota(s) de R$ 2,00\n", q6);
    printf(" %d nota(s) de R$ 1,00\n", q7);
}