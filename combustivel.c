int main(){
    int hrs, vel, km;
    double gasto;

    scanf("%d", &hrs);
    scanf("%d", &vel);
    km = vel * hrs;
    gasto = km / 12;
    printf("%.3lf\n", gasto);
}