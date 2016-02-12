#include <stdio.h>
#include <stdlib.h>

void leVet(int vet[], int tam){
    int i;
    printf("Digite %d numeros : ",tam);
    for(i=0;i<tam;i++)
        scanf("%d",&vet[i]);
}

void escreveVet(int vet[], int tam){
    int i;
    for(i=0;i<tam;i++)
        printf("vet[%d] = %d\n",i ,vet[i]);
}

int main(){
    int vet1[5], vet2[5];
    leVet(vet1,5); // Vetor | Tamanho
    leVet(vet2,5);
    escreveVet(vet1,5);
    escreveVet(vet2,5);
    return 0;
}
