#include <stdio.h>

float oper(int, int, char);
int main(){
    char op;
    int num1, num2;
    scanf("%d %d %c", &num1, &num2, &op);
    printf("%.2f", oper(num1, num2, op));
}
float oper(int num1, int num2, char op){
    switch (op)
    {
    case '/':
        return num1 / num2;
    case '-':
        return num1 - num2;
    case '+':
        return num1 + num2;
    case '*':
        return num1 * num2;
    }
}