#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[5][80];
  int numMatricula[5];
  char curso[5][40];
}Aluno;

int main(void) {
  Aluno aluno;

  for (int i = 0; i < 5; i++){
    printf("\n\t-_-_-_-_-_-");
    printf("\nNome: ");
    fgets(aluno.nome[i], 80, stdin);

    printf("\nNumero da Matricula: ");
    scanf("%d", &aluno.numMatricula[i]);
    getchar();

    printf("\nCurso: ");
    fgets(aluno.curso[i], 40, stdin);
  }

  for (int j = 0; j < 5; j++){
    printf("\n\t-_-_- Aluno %d-_-_-", j+1);
    printf("\nNome: %s", aluno.nome[j]);
    printf("Numero da Matricula: %d", aluno.numMatricula[j]);
    printf("\nCurso: %s", aluno.curso[j]);
  }

  return 0;
}
