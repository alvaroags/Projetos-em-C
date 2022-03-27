//exercicio de troca de variaveis
int main(){
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    c = a;
    d = b;
    while(a != d){
        if(a<d){
            a++;
        }
        else{
            a--;
        }
    }
    while(b != c){
        if (b<c){
            b++;        
        } else{
            b--; }
    }
    printf("O NUMERO 'a' AGORA VALE: %d\n", a);
    printf("O NUMERO 'B' AGORA VALE: %d\n", b);
}