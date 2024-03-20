/* 
  7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main(){

  const float PI = 3.14;
  float angulo = 0.0;
  float distancia = 0.0;
  float altura = 0.0;

  printf("Insira o angulo em graus: ");
  int scanner1 = scanf("%f", &angulo);
  printf("Insira a distância em metros: ");
  int scanner2 = scanf("%f", &distancia);

  if(angulo <= 45){

    //Tranformar em radiano
    float angulo_radiano = angulo * PI / 180.0;

    altura = distancia * sin(angulo_radiano);

    printf("A altura alcançada pelo avião é: %.2f metros\n", altura);
    
  }else{

    printf("O valor do ângulo apresentado não é válido");
  }
  
  return 0;
}