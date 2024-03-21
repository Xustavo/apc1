/*
  Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x R). Considere o raio um número inteiro e a constante PI igual a 3,1416
*/

#include <stdio.h>

int main(){

  const float PI = 3.1416;
  int raio = 0;
  float perimetro = 0.0;

  printf("Informe o valor do raio: ");
  int scanner1 = scanf("%i", &raio);

  //Cálculo
  perimetro = 2 * PI * raio;

  printf("O perímetro da pizza é: %f\n", perimetro);
  
  return 0;
}