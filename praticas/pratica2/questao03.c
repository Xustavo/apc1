/*
  3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/

#include <stdio.h>

int main(){
  
  float graus_celsius = 0.0;

  printf("Informe a temperatura em graus: ");
  int scanner1 = scanf("%f", &graus_celsius);

  float fahrenheit = (graus_celsius * 9 / 5) + 32;

  printf("A temperatura em fahrenheit é: %.2f\n", fahrenheit);
  
  return 0;
}