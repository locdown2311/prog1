#include <stdio.h>
#include <stdlib.h>
	   
int main()
{
   int i,j, m=5, n=3, aux; 
   float x[5][3], maior; 
   printf("Digite uma matriz 5x3:\n");
   for (i=0; i<m; i++)
	   {
	   printf("linha %d: \n",i);
	   for (j=0; j<n; j++)
	   scanf("%f", &x[i][j]);
	   }		 
	   puts("\nMatriz Lida");
	   for(i=0; i<m; i++)
	   {	 
	   for(j=0; j<n; j++)
	   printf("%.1f", x[i][j]);
	   printf("\n");
	   }
	   printf("\nOs elementos da diagonal principal sao:\n%.1f %.1f %.1f \n",x[0][0],x[1][1],x[2][2]);
	   
	   maior=x[0][0];
	   for(i=0;i<=4;i++){
	   for(j=0;j<=2;j++){
	   if(maior<x[i][j]){
	   maior=x[i][j]; }
  }
}
   printf("\nO maior elemento da matriz eh %.1f\n", maior);		 
   system("pause");
   return 0;
}
