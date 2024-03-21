/*
  2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>
#include <math.h>

int main(){

  int a = 0;
  int b = 0;

  printf("Insira o primeiro número: ");
  int scanner1 = scanf("%i", &a);

  printf("Insira o segundo número: ");
  int scanner2 = scanf("%i", &b);

  int quociente = a / b;
  float resto = a % b;

  printf("O resultado da divisão é %i e o resto é %.2f\n", quociente, resto);
  
  return 0;
}