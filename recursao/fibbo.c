#include <stdlib.h>
#include <stdio.h>

long int fib(long int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}


int main()
{
    int n;
    printf("Digite um numero qualquer : ");
    scanf("%d",&n);
    fib(n);
}
