/*
  4.25) Faça um programa que lê três números reais do teclado e apresenta na tela a média destes números.
*/

#include <stdio.h>

int main(){

  float a;
  float b;
  float c;

  printf("Entre com o primeiro número: ");
  int scanner = scanf("%f", &a);
  
  printf("Entre com o segundo número: ");
  scanner = scanf("%f", &b);
  
  printf("Entre com o terceiro número: ");
  scanner = scanf("%f", &c);

  float media = (a + b + c) / 3;

  printf("A média dos números é: %.2f\n", media);
  
  return 0;
}