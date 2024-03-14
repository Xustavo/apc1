/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/
#include <stdio.h>

int main(){
  int base = 0;
  int altura = 0;

  printf("informe a base: ");
  int scanner2 = scanf("%i", &base);

  printf("informe a altura: ");
  int scanner = scanf("%i", &altura);

  if(base < 0 || altura < 0){
    printf("Inválido\n");
  } else{
    
  int area = base*altura / 2;

  printf("A área do triângulo é: %i\n", area);


  }


  
  return 0;
}