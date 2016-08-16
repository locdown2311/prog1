#include <stdlib.h>
#include <stdio.h>
int main(){
    char st[40],stInv[40];
    int i, j ,tam= 0;
    printf("Digite a palavra :");
    gets(st);

    while(st[tam]!='\0' && tam<40){
        tam++;
    }
    stInv[tam] ='\0';
    j= tam-1;
    i = 0;
    while(i<tam){
        stInv[j] = st[i];
        i++;
        j--;

    }
    printf("Inversa : %s\n",stInv);


}

