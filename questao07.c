#include <stdio.h>
#include <math.h>

typedef struct {
  float x, y, a, r;
}Coordenadas;

int main(void) {
  Coordenadas c;
  printf("\nInforme o raio: ");
  scanf("%f", &c.r);
  printf("\nInforme o argumento: ");
  scanf("%f", &c.a);

  c.x = c.r * cos(c.a);
  c.y = c.r * sin(c.a);

  printf("\nCoordenada X: %.5f\nCoordenada y: %.5f\n",c.x,c.y );
  return 0;
}
