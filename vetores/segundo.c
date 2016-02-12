#include <stdlib.h>
#include <stdio.h>
int main(void){
    float vet1[] = {2.3,3.4,4.5,5.6};
    int vet2[] ={5,4,3,10,-1,0};
    int i;
    for(i=0;i<4;i++)
        printf("%.2f\n",vet1[i]);
    for(i=0;i<6;i++)
        printf("%d\n",vet2[i]);
    return 0;

}
