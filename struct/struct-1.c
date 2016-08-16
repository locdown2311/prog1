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
    printf("Digite o nome do aluno : \n");
    fflush(stdin);
    gets(aluno[i].nome);

    printf("Digite a idade do aluno : \n");
    scanf(" %d",&aluno[i].idade);
  }
  for(i=0;i<n;i++){
    printf("Aluno #%d\n",i+1);
    printf("Nome : %s\n",aluno[i].nome);
    printf("Idade do(a) %s : %d\n\n",aluno[i].nome , aluno[i].idade);
  }

  return 0;
}
