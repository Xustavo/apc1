/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

int main(){

  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float preco_inicial = 0.0f;

  printf("Informe o preço inicial: ");
  scanf("%f", &preco_inicial);

  float valor_icms = ICMS * preco_inicial;
  float valor_cofins = COFINS * preco_inicial;
  float valor_pis_pasep = PIS_PASEP * preco_inicial;

  printf("Valor ICMS = %f\n", valor_icms);
  printf("Valor COFINS = %f\n", valor_cofins);
  printf("Valor PIS_PASEP = %f\n", valor_pis_pasep);
  
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preço final é: %f\n", preco_final);
  
  return 0;
}