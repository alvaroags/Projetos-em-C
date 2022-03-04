int main (){
    int km;
    double lt, gasto;

    scanf("%d", &km);
    scanf("%lf", &lt);
    gasto = km / lt;
    printf("%.3lf km/l\n", gasto);
}