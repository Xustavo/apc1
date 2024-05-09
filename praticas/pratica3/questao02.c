/*
  2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
*/

#include <stdio.h>

int main(){

  float valor;
  float valor_desconto;
  float compra;

  printf("Entre com o valor do produto: ");
  int scanner = scanf("%f", &valor);

  if(scanner && valor > 0.0f){
  
  if(valor <= 100.00){

    valor_desconto = valor * 0.01;
    compra = valor - valor_desconto;
    printf("O valor de desconto é %.2f e o valor da compra será %.2f\n", valor_desconto, compra);
    
  } else if(valor >= 100.01 && valor <= 500.00){

    valor_desconto = valor * 0.05;
    compra = valor - valor_desconto;
    printf("O valor de desconto é %.2f e o valor da compra será %.2f\n", valor_desconto, compra);
    
  } else if(valor >= 500.0){

    valor_desconto = valor * 0.1;
    compra = valor - valor_desconto;
    printf("O valor de desconto é %.2f e o valor da compra será %.2f\n", valor_desconto, compra);
    
  }
}else {

    printf("Valor inválido!\n");
  }
  
  return 0;
}