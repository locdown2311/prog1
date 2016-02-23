#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if(n==1){
        return 1;
    }
    else
        return n*fatorial(n-1);
}


int main()
{
    int n;
    printf("Digite o numero que deseja saber o fatorial : ");
    scanf("%d",&n);
    fatorial(n);



}
