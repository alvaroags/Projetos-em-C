#include <stdio.h>

float polegadas(float);
float pe(float);
int main(){
    float metro;
    scanf("%f", &metro);
    polegadas(metro);
}
float polegadas(float metro){
    float polegada;
    polegada = metro * 39.37;
    printf("Polegadas = %.2f\nPe = %.2f\n", polegada, pe(polegada));
}
float pe(float polegada){
    float x;
    x = polegada / 12;
    return x;
}