/*
  9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main(){

  int numero;

  printf("Entre com um número: ");
  int scanner1 = scanf("%i", &numero);

  printf("O número escolhido foi: %i\n", numero);
  printf("Na table ASCII ele representa: %c\", numero);
  
  
  return 0;
}