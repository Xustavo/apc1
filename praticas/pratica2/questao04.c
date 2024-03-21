/*
  4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>

int main(){

  float largura = 0.0;
  float comprimento = 0.0;

  printf("Informe a largura em metros: ");
  int scanner1 = scanf("%f", &largura);

  printf("Informe a comprimento em metros: ");
  int scanner2 = scanf("%f", &comprimento);

  float area_m_quadrado = largura * comprimento;

  printf("A área e metros quadrados é: %.2f\n", area_m_quadrado);

  float area_hectar = area_m_quadrado / 10000;

  printf("A área em hectares é: %.2f\n", area_hectar);

  return 0;
}