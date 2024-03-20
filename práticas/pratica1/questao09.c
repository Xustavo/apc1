/*
  9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>

int main(){

  int idade = 0;
  int anos = 0;
  int meses = 0;
  int dias = 0;

  printf("Informe sua idade em anos, meses e dias(somente os números espaçados): ");
  int scanner = scanf("%i %i %i", &anos, &meses, &dias);

  idade = anos * 365 + meses * 30 + dias;

  printf("Sua idade em dias é: %i\n", idade);
  return 0;
}