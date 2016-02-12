#include <stdlib.h>
#include <stdio.h>

int main(){
    int vetor[10];
    int i;
    for(i=0; i<10; i++){
        printf("Digite o valor da posicao %d do vetor : ",i+1);
        scanf("%d", &vetor[i]);
    }
	float media=0;
	for(i=0;i<10;i++){
		media = media + vetor[i];
	}
	media = (float)media /10;
	printf("A media dos valores e de %.4f ",media);
	return 0;

}
