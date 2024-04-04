#include <stdio.h>

int main(){

  int numero;

  printf("Entre com um número inteiro: ");
  int scanner = scanf("%i", &numero);

  if(numero < 0 || numero > 10){

    printf("Não está dentro do esperado.\n");
  }else if(numero < 5){

    printf("Reprovado!\n");
  }else if(numero >= 5){

    printf("Aprovado!\n");
  }
  
  return 0;
}