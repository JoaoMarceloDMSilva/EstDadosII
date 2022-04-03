#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[10][80];
  char matricula[10][30];
  char codDisciplina[10][25];
  float n1[10],n2[10];
  float mediaPond[10];
}Aluno;

int main(void) {
  Aluno aluno;

  for (int i = 0; i < 10; i++){
    printf("\n\t-_-_-_-_-_-");
    printf("\nNome: ");
    fgets(aluno.nome[i], 80, stdin);

    printf("\nMatricula: ");
    fgets(aluno.matricula[i], 30, stdin);

    printf("\nCodigo da Disciplina: ");
    fgets(aluno.codDisciplina[i], 30, stdin);

    printf("\nNota 1: ");
    scanf("%f", &aluno.n1[i]);
    printf("\nNota 2: ");
    scanf("%f", &aluno.n2[i]);
    getchar();
  }

  //Calcular mediaPond
  for (int k = 0; k < 10; k++){
    aluno.mediaPond[k] = ((aluno.n1[k]*1) + (aluno.n2[k]*2))/(1 + 2);
  }
  
  
  //Imprimir tudo
  printf("\n\t-_-_-_ Lista Geral -_-_-_");
  for (int n = 0; n < 10; n++){
    printf("\n\n\t-_-_-Aluno %d -_-_-\n", n+1);
    printf("\nNome: %s", aluno.nome[n]);
    printf("Matricula: %s", aluno.matricula[n]);
    printf("Cod. Disciplina: %s", aluno.codDisciplina[n]);
    printf("Nota 1: %.2f\tNota 2: %.2f", aluno.n1[n], aluno.n2[n]);
    printf("\nMedia: %.2f", aluno.mediaPond[n]);

  }
  
  return 0;
}
