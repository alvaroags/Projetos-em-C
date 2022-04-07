#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
	int j, i, num[5][7], soma;
	srand(time(NULL));
	
	for(j=0;j<5;j++){
		for(i=0;i<7;i++)
			num[j][i] = rand() % 1000;
	}
	for(j=0;j<5;j++){
		for(i=0;i<7;i++)
			printf("%3d ", num[j][i]);
		printf("\n");
	}
	for(j=0;j<5;j++){
		for(i=0;i<7;i++)
			soma+= num[j][i];
	}
	printf("SOMA DOS NUMEROS: %d", soma);
	return 0;
}
