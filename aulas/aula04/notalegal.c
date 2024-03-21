#include <stdio.h>

int main(){

  char nome[31];
  int quantidade = 0;
  float valor = 0.0;

  printf("Insira o nome do produto: ");
  int scanner0 = scanf("%[^\n]s", nome);

  printf("Insira a quantidade do produto: ");
  int scanner1 = scanf("%i", &quantidade);

  printf("Insira o valor do produto: ");
  int scanner2 = scanf("%f", &valor);

  printf("----------------------------\n");
  printf("         NOTA LEGAL         \n");
  printf("----------------------------\n");
  printf("ITEM             QTD   VALOR\n");
  printf("%-16s %03i %7.2f\n", nome, quantidade, valor);
  
  return 0;
}