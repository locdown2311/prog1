#include <stdlib.h>
#include <stdio.h>

int mdc(int x, int y){
    int resto = x%y;
    if(resto == 0){
        return y;
    }
    else
        return mdc(y,resto);


}

int main()
{
    int x , y;
    printf("Digite o valor de x e y : ");
    scanf("%d %d",&x ,&y);
    mdc(x,y);



}
