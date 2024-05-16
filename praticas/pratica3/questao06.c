// Faça um programa em C que diga os múltiplos de um número n de 1 a 100

#include <stdio.h>

int main() {

  int n;

  printf("Entre com um número: ");
  int scanner = scanf("%i", &n);

  if(n < 1 || n > 101){

    printf("Número Inválido\n");
  }

  for (int i = 1; i <= 100; i++) {

    if (i % n == 0) {

      printf("%i é múltiplo de %i\n", i, n);
    }
  }

  return 0;
}