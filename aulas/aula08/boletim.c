#include <stdio.h>

int main(){

  float boletim [10] [3];

  for(int i = 0; i < 10; i++){

    for(int j = 0; j < 2; j++){

      printf("Entre com a %ia nota do %i° aluno: ", i + 1, j + 1);
      int scanner = scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4f * boletim[i][0] + 0.6 * boletim[i][1];
  }
  printf("BOELTIM DE NOTAS\n");
  printf("Nota1 Nota2 Média\n");
  for(int i = 0; i < 10; i++){

    for(int j = 0; j < 3; j++){

      printf("%5.1f ", boletim[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}