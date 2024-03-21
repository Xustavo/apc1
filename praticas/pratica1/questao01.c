/*
  Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 e 10
*/

#include <stdio.h>

int main(){
  float nota1 = 0.0;
  float nota2 = 0.0;

  printf("Informe sua nota1: ");
  int scanner1 = scanf("%f", &nota1);

  printf("Informe sua nota2: ");
  int scanner2 = scanf("%f", &nota2);

  if(nota1 > 10 || nota2 > 10){

    printf("Inválido\n");
  }else{

    float media = 0.4*nota1 + 0.6*nota2;

    printf("A média é %.1f\n", media);

    if(media >= 5.0){
      printf("Passei\n");
    }else{
      printf("Vamos de P3\n");
    }
  }

  return 0;
}