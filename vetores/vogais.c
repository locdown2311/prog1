#include <stdlib.h>
#include <stdio.h>

int main(){
	char texto[100] = "Programacao";
	int i;
	int contador = 0;
	for(i=0; texto[i]!= '\0'; i++){
		if(texto [i] == 'a' || texto [i] == 'A'||
		texto [i] == 'e' || texto [i] == 'E' ||
		texto [i] == 'I' || texto [i] == 'i' ||
		texto [i] == 'o' || texto [i] == 'O' ||
		texto [i] == 'u' || texto [i] == 'U')
		contador++;
	}
	printf("A frase possui %d vogais .",contador);
	return 0;
}
