/*
  5. Faça um programa em C que leia um ano e verifique se ele é bissexto (é múltiplo de 4 e não é múltiplo de 100, ou é múltiplo de 400).
*/

#include <stdio.h>

int main(){

  int ano;

  printf("Entre com um ano: ");
  int scanner = scanf("%i", &ano);

  if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){

    printf("O ano é bissexto\n");
  }else{

    printf("O ano não é bissexto\n");
  }
  
  return 0;
}