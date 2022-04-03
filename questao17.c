#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[5][15];
  float potenciakW [5];
  float horaspDia[5];
  float consumoIndiv[5];
  float consumoTotal;
  float consumoParcial[5];

}Consumo;

int main(void) {
  Consumo c;
  int t;
  
  printf("\nQuantidade de dias: ");
  scanf("%d", &t);
  
  for (int i = 0; i < 5; i++){
    getchar();
    
    printf("\n\t-_-_-_-_-_-_");
    printf("\nNome do produto: ");
    fgets(c.nome[i], 15, stdin);
    
    printf("\nPotencia [em kW]: ");
    scanf("%f", &c.potenciakW[i]);
    
    printf("\nHoras ligado por dia: ");
    scanf("%f", &c.horaspDia[i]);
  }

  //Consumo Individual:
  c.consumoTotal = 0;
  for (int j = 0; j < 5; j++){
    c.consumoIndiv[j] = (t * c.potenciakW[j] * c.horaspDia[j])/1000;
    c.consumoTotal = c.consumoTotal + c.consumoIndiv[j];
  }

  //Consumo relativo
  for (int l = 0; l < 5; l++){
    c.consumoParcial[l] = (c.consumoIndiv[l]/c.consumoTotal)*100;
  }
  
  printf("\nConsumo Total: %.5f", c.consumoTotal);
  for(int m = 0; m < 5; m++){
    printf("\n\t-_-_-_-_-_-_");
    printf("\nProduto: %s", c.nome[m]);
    printf("Consumo individual [kWh]: %.5f", c.consumoIndiv[m]);
    printf("\nConsumo Parcial: %.3f%%",c.consumoParcial[m]);
  }
  
  return 0;
}
