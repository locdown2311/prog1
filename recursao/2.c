#include <stdlib.h>
#include <stdio.h>
int soma (int v[], int n)
{
    if(n==1)
        return v[0];

    else
        return v[n-1] + soma(v,n-1);
}



int main(){
    int x,v[]={1,2,3};
    x = soma(v,3);
    return 0;


}
