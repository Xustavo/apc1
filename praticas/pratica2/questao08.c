/*
8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <stdio.h>
#include <math.h>

int main(){

  float x1;
  float x2;
  float y1;
  float y2;

  printf("Informe o x do primeiro par ordenado: ");
  int scanner1 = scanf("%f", &x1);

  printf("Informe o y do primeiro par ordenado: ");
  int scanner2 = scanf("%f", &y1);

  printf("Informe o x do segundo par ordenado: ");
  int scanner3 = scanf("%f", &x2);

  printf("Informe o y do segundo par ordenado: ");
  int scanner4 = scanf("%f", &y2);

  //Colocando os cálculos em variáveis
  float x = (x2) - (x1);
  float y = (y2) - (y1);

  double x_elevado = pow(x, 2);
  double y_elevado = pow(y, 2);

  //Fórmula
  float distancia_pontos = sqrt(x_elevado + y_elevado);

  //Printando os resultados
  printf("Os pontos são: (%.2f , %.2f) e (%.2f , %.2f)\n", x1, y1, x2, y2);
  printf("A distância entre os pontos é: %.2f u.a\n", distancia_pontos);
  
  
  return 0;
}