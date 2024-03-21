/*
  1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
*/

#include <stdio.h>

int main(){

  int a = 0;
  int b = 0;
  int c = 0;

  printf("Insira o primeiro número: ");
  int scanner1 = scanf("%i", &a);
  
  printf("Insira o segundo número: ");
  int scanner2 = scanf("%i", &b);
  
  printf("Insira o terceiro número: ");
  int scanner3 = scanf("%i", &c);

  float media = (a + b + c) / 3;

  printf("A média dos números é: %.2f\n", media);
  
  return 0;
}