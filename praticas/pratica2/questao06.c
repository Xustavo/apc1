/*
  6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>

int main(){

  float ano_fabricacao;
  float ano_depreciacao;
  float valor_compra;

  printf("Informe o Valor da compra do veículo: ");
  int scanner1 = scanf("%f", &valor_compra);

  printf("Informe o ano de fabricação do veículo: ");
  int scanner2 = scanf("%f", &ano_fabricacao);

  printf("Informe o ano de depreciação do veículo: ");
  int scanner3 = scanf("%f", &ano_depreciacao);

  if(ano_fabricacao == ano_depreciacao){

    printf("O valor não muda.\n");
    
  }else if(ano_depreciacao < ano_fabricacao){

    printf("Inválido\n");
    return 1;
    
  }else{

    float depreciacao = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;
    float valor_atual = valor_compra - depreciacao;
    printf("O valor do carro na compra era: %.2f\n", valor_compra);
    printf("A depreciação foi de: %.2f\n", depreciacao);
    printf("O valor atual do carro é: %.2f\n", valor_atual);
  }
  
  return 0;
}