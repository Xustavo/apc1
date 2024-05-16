#include <stdio.h>

int main(){

  int numero;
  int numero_valido = 0;

  do {

    printf("Entre com um número entre 1 e 10: ");
    int scanner = scanf("%i", &numero);
    numero_valido = numero > 0 && numero < 11;

    if(scanner && numero_valido){
      printf("Segue o Jogo!\n");
      
    }else {

      printf("Errou, tenta de novo\n");
      getchar(); //ignora o \n
    }
  } while(numero_valido == 0);
  
  return 0;
}