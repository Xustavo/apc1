#include <stdio.h>
#include <stdlib.h>

int main() {

  int opcao = 0;

  while (opcao != 4) {
    int scanner = system("clear");
    printf("-----MENU-----\n");
    printf("---1 iniciar--\n");
    printf("---2 ranks----\n");
    printf("---3 ajuda----\n");
    printf("---4 sair-----\n");
    printf("Escolha a opção: ");
    scanner = scanf("%i", &opcao);
    
    while(getchar() != '\n'); //limpa buffer do teclado

    if (!scanner)
      opcao = 0;

    switch (opcao) {

    case 1: {
      char nome[31];
      scanner = system("clear");
      printf("Qual o seu nome? ");
      scanner = scanf("%[^\n]s", nome);
      while(getchar() != '\n'); 

      printf("Olá %s!\n", nome);
      printf("Pressiona ENTER p/ iniciar...");
      getchar();
      break;
    }
    case 2: {
      scanner = system("clear");
      printf("Ranking top 5\n");
      printf("1° Carlos 2k\n");
      printf("2° Gisela 1.5k\n");
      printf("3° Arthur 1k\n");
      printf("4° Felipe 900\n");
      printf("5° Gustavo 200\n");
      printf("Pressione ENTER p/ retornar...");
      getchar();
      break;
    }
    case 3:
      break;
    case 4:
      printf("Até mais!\n");
      break;
    default:
      printf("Inválido, press ENTER p/ prosseguir...\n");
      getchar();
    }
  }
  return 0;
}