/*
  4.26) Faça um programa para ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles. Utilize variáveis inteiras.
*/

#include <stdio.h>

int main(){

  int x;
  int y;

  printf("Entre com um valor inteiro para x: ");
  int scanner = scanf("%i", &x);

  printf("Entre com um valor inteiro para y: ");
  scanner = scanf("%i", &y);

  int quociente = x / y;
  int resto = x % y;

  printf("O quociente da divisão de x por y é: %i\n", quociente);
  printf("O resto da divisão de x por y é: %i\n", resto);
  
  return 0;
}