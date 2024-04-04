/*
  4.35) Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/

#include <stdio.h>

int main(){

  float metros_quadrados;
  float lata_tinta = 54.0;
  float preco_tinta = 80.0;

  printf("Insira a quantidade de metros quadrados: ");
  int scanner = scanf("%f", &metros_quadrados);

  float compra = metros_quadrados / lata_tinta;

  float total = preco_tinta * compra;

  printf("Você vai precisar de %.2f latas e o preço será de: R$ %.2f\n", compra, total);

  return 0;
}