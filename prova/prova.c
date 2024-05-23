#include <stdio.h>

int main() {

  int opcao;

  while (opcao != 4) {
    printf("----SPOTIFY----\n");
    printf("---------------\n");
    printf("--1.Pesquisar--\n");
    printf("--2.Playlists--\n");
    printf("3.Configurações\n");
    printf("-----4.Sair----\n");

    printf("Digite a opção que deseja: ");
    int scanner = scanf("%i", &opcao);

    if (!scanner)
      opcao = 0;

    switch (opcao) {

    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      printf("See you next time!\n");
      break;
    default:
      printf("Inválido, tente novamente!\n");
      break;
      getchar();
    }
  }

  return 0;
}