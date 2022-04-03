#include <stdio.h>
#include <math.h>

typedef struct {
  int dia;
  int mes;
  int ano;
}dma;

int main(void) {
  dma str1, str2;
  int difDias;

  printf("\nInforme o DIA [I]: ");
  scanf("%d", &str1.dia);
  printf("\nInforme o MES [I]: ");
  scanf("%d", &str1.mes);
  printf("\nInforme o ANO [I]: ");
  scanf("%d", &str1.ano);

  printf("\nInforme o DIA [II]: ");
  scanf("%d", &str2.dia);
  printf("\nInforme o MES [II]: ");
  scanf("%d", &str2.mes);
  printf("\nInforme o ANO [II]: ");
  scanf("%d", &str2.ano);

  str1.dia = (str1.dia) + (str1.mes * 30) + (str1.ano * 365);
  str2.dia = (str2.dia) + (str2.mes * 30) + (str2.ano * 365);

  difDias = abs(str1.dia - str2.dia);

  printf("\nDias passados entre [I] e [II]: %d", difDias);
  
  return 0;
}
