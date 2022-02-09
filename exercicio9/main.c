#include <stdio.h>
#include <stdlib.h>


int SomaDivisores(int n);
int main(){
 int numero, i,n,numero1,numero2,numero3;

 for(i = 0; i < 9; i++){
 printf("Quantos numeros voce vai digitar numero? ");
 scanf("%d", &numero);

 printf("digite um numero: ");
 scanf("%d", &numero1);

 printf("digite um numero: ");
 scanf("%d", &numero2);

 printf("digite um numero: ");
 scanf("%d", &numero3);

 return 0;

}}

int main(){

    assert(ehPositivo(100) == 1);
    assert(ehPositivo(0) == 1);
    assert(ehPositivo(-100) == 0);

    return 0;
}}
