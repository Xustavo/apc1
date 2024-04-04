/*
  4.27) Escreva abaixo o código de um programa que calcule a média de quilômetros
  feitos com cada litro de combustível. Solicite a entrada de dados com quilômetros e litros e depois exiba o cálculo.
*/

#include <stdio.h>

int main(){

  float km;
  float litros;

  printf("Insira quantos km foram rodados: ");
  int scanner = scanf("%f", &km);

  printf("Insira quantos litros foram gastos: ");
  scanner = scanf("%f", &litros);

  float km_por_litro = km / litros;
  float quanto_rodou = km_por_litro * litros;

  printf("Seu carro está fazendo %.2f km por litro\n", km_por_litro);
  printf("Seu carro percorreu %.2f kms\n", quanto_rodou);

  return 0;
}