#include <stdlib.h>
#include <stdio.h>

int main()
  {
  struct aluno{
    char nome[100];
    int idade;
  };
  int n,i;
    printf("Digite a quantidade de alunos : ");
    scanf("%d",&n);
    
  struct aluno aluno[n];
  
  for(i=0;i<n;i++){
    printf("Digite o nome do aluno : "\n);
    scanf(" %s",&aluno[i].nome);
    fflush(stdin);
    
    printf("\nDigite a idade do aluno : ");
    scanf(" %d",&aluno[i].idade);
  }
  
  return 0;
}
