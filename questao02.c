#include <stdio.h>
#include <string.h>

typedef struct {
  char rua[40];
  char bairro[40];
  int numCasa;
}Endereco;

typedef struct{
  char nome[80];
  int idade;
  Endereco endereco;
} Registro;


int main(void) {
  Registro r;

  printf("\nNome: ");
  fgets(r.nome, 80, stdin);
  
  printf("\nIdade: ");
  scanf("%d", &r.idade);
  getchar();
  
  printf("\n-_- Endereco -_-\nRua: ");
  fgets(r.endereco.rua, 40, stdin);

  printf("\nBairro: ");
  fgets(r.endereco.bairro, 40, stdin);

  printf("\nNumero da casa/apartamento: ");
  scanf("%d", &r.endereco.numCasa);


  printf("\n\t-_-_ Contato -_-_");
  printf("\nNome: %s", r.nome);
  printf("Idade: %d", r.idade);
  printf("\n\t-_-_ Endereco -_-_");
  printf("\nRua: %s", r.endereco.rua);
  printf("Bairro: %s", r.endereco.bairro);
  printf("Numero casa/apartamento: %d", r.endereco.numCasa);
  

  return 0;
}
