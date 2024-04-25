#include <stdio.h>

int main(){

  int a = 0;

  printf("Entre com um número: ");
  int scanner = scanf("%i", &a);

  if(scanner){
  
    if(a % 2 == 0){
  
      printf("O número é par!\n");
    }else{
  
      printf("O número é ímpar!\n");
    }
  }else{

    printf("Inválido\n");
  }
  return 0;
}