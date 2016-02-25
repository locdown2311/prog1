#include <stdio.h>
#include <stdlib.h>
    void nao_troca(int a , int b){
        int temp;
        temp =a;
        a =b;
        b=temp;

    }

    void troca(int *a,int *b){
        int temp;
        temp= *a;
        *a = *b;
        *b=temp;


    }


void main(){
    int x =1 , y=2;
    nao_troca(x,y);
    printf("Valor de x = [%d] y = [%d]\n",x,y);
    troca(&x,&y);
    printf("Valor de x = [%d] y = [%d]\n",x,y);


}
