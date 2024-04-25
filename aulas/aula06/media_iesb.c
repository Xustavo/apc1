#include <stdio.h>

int main() {

  float a = 0.0;
  float b = 0.0;
  float media = 0.0;

  printf("Entre com a nota a: ");
  int scanner = scanf("%f", &a);

  if (a < 0.0 || a > 10.0) {

    printf("Inválido\n");
    return 0;
  }

  printf("Entre com a nota b: ");
  scanner = scanf("%f", &b);

  if (b < 0.0 || b > 10.0) {

    printf("Inválido\n");
  }

  media = (a * 0.4) + (b * 0.6);

  if (media >= 9.0f && media <= 10.0f) {

    printf("A média é SS\n");
  } else if (media >= 7.0f && media <= 8.9f) {

    printf("A média é MS\n");
  } else if (media >= 5.0f && media <= 6.9f) {

    printf("A média é MM\n");
  } else if (media >= 3.0f && media <= 4.9f) {

    printf("A média é MI\n");
  } else if (media >= 0.1f && media <= 2.9f) {

    printf("A média é II\n");
  } else {

    printf("A média é SR\n");
  }

  printf("A média é: %.2f\n", media);
  
  return 0;
}