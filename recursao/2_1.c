#include <stdlib.h>
#include <stdio.h>

//Fibbonacci com scanf

long int fib(long int n){
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 1;
	}
	else
		return fib(n-1) + fib(n-2);

}


int main()
{
	long int n;
	printf("Digite o tamanho da sequencia fibbonacci : ");
	scanf("%d",&n);
	fib(n);




}
