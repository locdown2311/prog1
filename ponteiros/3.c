#include <stdlib.h>
#include <stdio.h>

int main()
{
  float *a=NULL , *b=NULL , c=5;
  a =&c;
  if(a != NULL){
      b=a;
      printf("Numero : %f ",*b);
}



}
