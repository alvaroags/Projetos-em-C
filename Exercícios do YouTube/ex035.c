#include<stdio.h>
#include<stdlib.h>
int main(){
    char mes[12][20]= {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    int i, salvoMax, salvoMin;
    float temp[3], maxTemp=0, minTemp=99999999;
    for(i=0;i<12;i++){
        printf("DIGITE A TEMPERATURA DO MES %d: ", i+1);
        scanf("%f", &temp[i]);
    }
    for(i=0;i<12;i++){
        if(temp[i]>=maxTemp){
            maxTemp = temp[i];
            salvoMax = i;
        }
        if(temp[i]< minTemp){
            minTemp = temp[i];
            salvoMin = i;
        }
    }

    printf("MAXIMA TEMPERATURA %.2f FEITA NO MES DE %s\n", maxTemp, mes[salvoMax]);
    printf("MINIMA TEMPERATURA %.2f FEITA NO MES DE %s", minTemp, mes[salvoMin]);
    
}