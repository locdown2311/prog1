#include <stdio.h>
#include <stdlib.h>
void imprime_par(){
	int vetor[10];
	int i;
	for(i=0;i<10;i++){
		printf("Digite o valor da posicao %d do vetor  : ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=0;i<10;i=i+2){
		printf("Posicao %d - Valor %d \n", i , vetor[i]);
	}
}
int main(){
		imprime_par();
		return 0;
}
