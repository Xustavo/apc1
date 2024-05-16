//Programa que calcula fatorial de n

#include <stdio.h>

int main(){

  int n;

  printf("Entre com um número: ");
  int scanner = scanf("%i", &n);

  if(n < 1){

    printf("Número inválido\n");
    return 0;
  }

  long int fatorial = 1;
  
  for (int i = n; i > 1; i--){

    fatorial = fatorial * i;
    printf("%i x ", i);
  }
  printf("1 = %li\n", fatorial);
  
  return 0;
}