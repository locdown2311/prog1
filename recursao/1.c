#include <stdio.h>
#include <stdlib.h>

long int fat(long int num){
    if(num==1){
        return 1;
    }
    else
        return (num*fat(num-1));

}

int main()
{
    int num;
    printf("Digite um numero para calcular o fatorial : ");
    scanf("%d",&num);
    fat(num);



}
