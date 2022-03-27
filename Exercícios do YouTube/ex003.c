int main(){
    float conta, porc;
    int pess;
    printf("DIGITE O VALOR DA CONTA: ");
    scanf("%f", &conta);
    printf("DIGITE A PORCENTAGEM DA GORJETA: ");
    scanf("%f", &porc);
    printf("INFORME QUANTAS PESSOAS TEM: ");
    scanf("%d", &pess);
    conta = (conta + (conta * (porc / 100))) / pess;
    printf("O VALOR INDIVIDUAL DA CONTA E: R$ %.2f", conta);
}