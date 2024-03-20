/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

int main(){

  int segundos = 0;

  //Pedindo uma quantidade de segundos
  printf("Insira uma quantidade de segundos: ");
  int scanner = scanf("%i", &segundos);

  //Convertendo segundos em horas e minutos
  int horas = segundos / 3600.0;
  int minutos = (segundos % 3600) / 60.0;
  int resto_segundos = (segundos % 3600) % 60;

  //Printando o resultado
  printf("%i segundos equivalem a %i horas, %i minutos e %i segundos\n", segundos, horas, minutos, resto_segundos);
  
  return 0;
}