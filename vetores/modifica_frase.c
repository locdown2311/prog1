#include <stdlib.h>
#include <stdio.h>


int modifica(char frase[]){
    int i;
    int contador = 0;
    for(i=0;frase[i] != '\0';i++){
        if(frase [i] == 'a') {
            frase [i] ='b';
            contador++;
        }
    }
    puts(frase);
    return contador;
}
int main()
{
    char frase[101] = "A casa esta cheia.";
    int cont = modifica(frase);

    printf("Foram modificados %d caracteres 'a' por 'b'. ",cont);
    return 0;
}
