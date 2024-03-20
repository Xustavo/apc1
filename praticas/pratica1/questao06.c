/* 
  6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main(){

  //Prototype
  float raiz_quadrada = 0.0;

  //Valores de a, b e c
  int a = 0;
  int b = 0;
  int c = 0;

  //Pedindo os valores para montar a equação
  printf("Insira os valores para montar a equação de segundo grau:\n");
  printf("a: ");
  int scanner1 = scanf("%i", &a);
  printf("b: ");
  int scanner2 = scanf("%i", &b);
  printf("c: ");
  int scanner3 = scanf("%i", &c);

  //Printando a equação com suas devidas condições
  if(a == 1){

    printf("A equação é: x² %+ix %+i = 0\n", b, c);
    
  }else if(a == -1){

    printf("A equação é: -x² %+ix %+i = 0\n", b, c);
    
  }else{

    printf("A equação é: %+ix² %+ix %+i = 0\n", a, b, c);
  }

  //Calculando delta e sua raiz
  float delta = b * b - 4 * a * c;

  if(delta < 0){

    //Equação com raízes não reais
    float parte_real = (-b / 2 * a);
    float parte_imaginaria = (sqrt(-delta) / (2 * a));

    printf("A primeira raiz da equação é: %.2f + %.2fi\n", parte_real, parte_imaginaria);
    printf("A segunda raiz da equação é: %.2f - %.2fi\n", parte_real, parte_imaginaria);

    
  }else{

    //Equação de Bhaskara com raízes reais
    raiz_quadrada = sqrt(delta);
    float x1 = (-b + raiz_quadrada) / (2 * a);
    float x2 = (-b - raiz_quadrada) / (2 * a);

    printf("A primeira raiz da equação é: %.2f\n", x1);
    printf("A segunda raiz da equação é: %.2f\n", x2);
  }
  
  return 0;
}