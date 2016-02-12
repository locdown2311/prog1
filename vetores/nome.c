#include <stdlib.h>
#include <stdio.h>

int main(){
	char nome[100];
	printf("Digite seu nome completo : ");
	gets(nome);
	
	printf("Seu nome completo e : ");
	puts(nome);
	
	return 0;
}
