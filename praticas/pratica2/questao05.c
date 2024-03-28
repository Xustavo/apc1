/*
  5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/

#include <stdio.h>

int main(){

  float peso = 0.0;
  float altura = 0.0;

  printf("Informe seu peso em kg: ");
  int scanner1 = scanf("%f", &peso);

  printf("Informe sua altura em m: ");
  int scanner2 = scanf("%f", &altura);

  float imc = peso / (altura * altura);

  printf("Seu índice de massa corporal é: %.2f\n", imc);
  
  return 0;
}