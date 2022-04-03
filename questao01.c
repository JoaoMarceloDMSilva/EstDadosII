#include <stdio.h>

typedef struct{
  int horas;
  int minutos;
  int segundos;
} Horario;

typedef struct{
  int dia;
  int mes;
  int ano;
}Data;

typedef struct{
  Horario horario;
  Data data;
  char note[100];
}Compromisso;

int main(void) {
  
  return 0;
}
