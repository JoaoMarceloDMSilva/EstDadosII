#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[5][80];
  char matricula[5][25];
  float n1[5],n2[5],n3[5];
  float media[5];
}Aluno;

int main(void) {
  Aluno aluno;
  int auxNota, auxMediaMax, auxMediaMin;

  for (int i = 0; i < 5; i++){
    printf("\n\t-_-_-_-_-_-");
    printf("\nNome: ");
    fgets(aluno.nome[i], 22, stdin);

    printf("\nMatricula: ");
    fgets(aluno.matricula[i], 80, stdin);

    printf("\nNota 1: ");
    scanf("%f", &aluno.n1[i]);
    printf("\nNota 2: ");
    scanf("%f", &aluno.n2[i]);
    printf("\nNota 3: ");
    scanf("%f", &aluno.n3[i]);
    getchar();
  }

  printf("\n\t-_-_-_ Maior N1 -_-_-_");
  auxNota = aluno.n1[0];
  for (int j = 0; j < 5; j++){
    if (aluno.n1[j] > auxNota){
      auxNota = aluno.n1[j];
    }
  }

  for (int j = 0; j < 5; j++){
    if ((aluno.n1[j]) == auxNota){
      printf("\nAluno: %s", aluno.nome[j]);
      printf("Nota 1: %.2f", aluno.n1[j]);
    }
  }
  //Calcular media
  for (int k = 0; k < 5; k++){
    aluno.media[k] = (aluno.n1[k] + aluno.n2[k] + aluno.n3[k])/3;
  }
  
  printf("\n\t-_-_-_ MAIOR Media -_-_-_");
  auxMediaMax = aluno.media[0];
  
  for (int m = 0; m < 5; m++){
    if (aluno.media[m] > auxMediaMax){
      auxMediaMax = aluno.media[m];
    }
  }

  for (int m = 0; m < 5; m++){
    if ((aluno.media[m]) == auxMediaMax){
      printf("\nAluno: %s", aluno.nome[m]);
      printf("Media: %.2f", aluno.media[m]);
    }
  }

  printf("\n\t-_-_-_ MENOR Media -_-_-_");
  auxMediaMin = aluno.media[0];
  
  for (int m = 0; m < 5; m++){
    if (aluno.media[m] < auxMediaMin){
      auxMediaMin = aluno.media[m];
    }
  }

  for (int m = 0; m < 5; m++){
    if ((aluno.media[m]) == auxMediaMin){
      printf("\nAluno: %s", aluno.nome[m]);
      printf("Media: %.2f", aluno.media[m]);
    }
  }

  //Imprimir tudo
  printf("\n\t-_-_-_ Lista Geral -_-_-_");
  for (int n = 0; n < 5; n++){
    printf("\n\n\t-_-_-Aluno %d -_-_-\n", n+1);
    printf("\nNome: %s", aluno.nome[n]);
    printf("Matricula: %s", aluno.matricula[n]);
    printf("Nota 1: %.2f\tNota 2: %.2f\tNota 3: %.2f", aluno.n1[n], aluno.n2[n],aluno.n3[n]);
    printf("\nMedia: %.2f", aluno.media[n]);

    if(aluno.media[n] >= 6){
      printf("\n\tAPROVADO");
    }else{
      printf("\n\tREPROVADO");
    }
  }
  
  return 0;
}
