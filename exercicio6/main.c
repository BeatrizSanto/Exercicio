#include <stdio.h>
#include <stdlib.h>

int main()
{
   float area, comprimento, largura,quadrado,preco;

printf("Digite a largura do terreno: ");
scanf("%f",&largura);
printf("Digite o comprimento do terreno: ");
scanf("%f",&comprimento);
printf("Digite o valor do metro quadrado: ");
scanf("%f",&quadrado);

area=comprimento*largura;
preco=comprimento*quadrado;

printf("Area do terreno  %.1f\n",area);

printf("Preco do terreno %.1f",preco);

return 0;
}
