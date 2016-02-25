#include <stdlib.h>
#include <stdio.h>
int main()
{
  int a[] = {1,2,3,4,5};
  int *p;
  p =a;
  int i,b;

  for(i=0;i<5;i++)
    p[i] = i*i;

  for(b=0;b<5;b++)
    printf("Valor de [b] = [%d]\n",p[b]);




}
