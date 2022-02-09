#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float largura,comprimento,quadrado,area;

  printf("Digite a largura do terreno  = "); scanf("%f", &largura);
  printf("Digite  o comprimento do terreno  = ");  scanf("%f" &comprimento);
  printf("Digite o valor do metro quadrado  = ");  scarf("&f", &largura, &comprimento);

  area = largura *comprimento;
  quadrado = largura * comprimento;

  printf("AREA = %f m2 \n", area);
  printf("QUADRADO = %f m2 \n", quadrado);

  system("pause");

  return 0;

}
