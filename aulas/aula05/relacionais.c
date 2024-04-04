#include <stdio.h>

int main(){

  int numero1;
  int numero2;

  printf("Entre com o primeiro número: ");
  int scanner = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
  scanner = scanf("%i", &numero2);

  if(numero1 > numero2){

    printf("O primeiro número é maior!\n");
  }else if(numero2 > numero1){

    printf("O segundo número é maior!\n");
  }else{

    printf("Os números são iguais!\n");
  }

  return 0;
}