/*
  5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)
*/

#include <stdio.h>

int main(){

  float GB = 0.0;

  //Inserindo a quantidade de gigas
  printf("Insira a quantidade de gigabytes: ");
  int scanner = scanf("%f", &GB);

  //Condição de validação
  if(GB < 0 || GB == 0){

    printf("Inválido\n");
  }else {

    //Calcúlos
    float bytes = GB * 1024 * 1024 * 1024;
    
    //Printando o resultado
    printf("Quantidade de GB em bytes: %f\n", bytes);
  }
  
  return 0;
}