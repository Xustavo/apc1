/*
  10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>
#include <math.h>

int main(){

  int numero = 0;
  int milhares = 0;
  int centenas = 0;
  int dezenas = 0;
  int unidades = 0;

  printf("Insira um número: ");
  int scanner0 = scanf("%i", &numero);

  milhares = numero / 1000;
  centenas = (numero % 1000) / 100;
  dezenas = ((numero % 1000) % 100) / 10;
  unidades = (((numero % 1000) % 100) %10);

  printf("Seu número decomposto possui %i milhares, %i centenas, %i dezenas e %i unidades\n", milhares, centenas, dezenas, unidades);
  
  return 0;
}