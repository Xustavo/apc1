/*
  10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.
*/

#include <stdio.h>

int main(){

  int numero;

  printf("Entre com um número: ");
  int scanner1 = scanf("%i", &numero);

  //Fazendo a tabuada
  int um = numero * 1;
  int dois = numero * 2;
  int tres = numero * 3;
  int quatro = numero * 4;
  int cinco = numero * 5;
  int seis = numero * 6;
  int sete = numero * 7;
  int oito = numero * 8;
  int nove = numero * 9;
  int dez = numero * 10;

  printf("O número escolhido foi: %i\n", numero);
  printf("A tabuada do número é:\n");
  printf("%i x 1 = %i\n", numero, um);
  printf("%i x 2 = %i\n", numero, dois);
  printf("%i x 3 = %i\n", numero, tres);
  printf("%i x 4 = %i\n", numero, quatro);
  printf("%i x 5 = %i\n", numero, cinco);
  printf("%i x 6 = %i\n", numero, seis);
  printf("%i x 7 = %i\n", numero, sete);
  printf("%i x 8 = %i\n", numero, oito);
  printf("%i x 9 = %i\n", numero, nove);
  printf("%i x 10 = %i\n", numero, dez);
  
  return 0;
}