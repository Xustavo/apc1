#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //biblioteca para o usleep, que causa atraso

#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int main() {
  int opcao = 0; // menu
  int scanner;   // leitura de dados inseridos pelo usuário

  while (opcao != 4) {
    scanner = system("clear");
    printf(GREEN "----SPOTIFY----\n" RESET);
    printf(GREEN "---------------\n" RESET);
    printf(GREEN "---1.Search----\n" RESET);
    printf(GREEN "---2.Playlists-\n" RESET);
    printf(GREEN "---3.Ranking 5-\n" RESET);
    printf(GREEN "---4.Leave-----\n" RESET);

    printf(GREEN "Digite a opção que deseja: " RESET);
    scanner = scanf("%d", &opcao);

    if (scanner != 1) {
      printf(GREEN "Entrada inválida. Tente novamente.\n" RESET);
      while (getchar() != '\n')
        ; // Limpa o buffer de entrada
      continue;
    }

    switch (opcao) {
    case 1: {
      scanner = system("clear");
      char pesquisa[100];
      printf(GREEN "Digite o nome de uma música ou algum artista: " RESET);
      scanner = scanf(" %[^\n]", pesquisa); // Lê uma linha inteira com espaços
      if (scanner != 1) {
        printf(GREEN "Erro ao ler a entrada.\n" RESET);
        break;
      }
      printf(GREEN "Buscando por '%s'\n" RESET, pesquisa);
      fflush(stdout);

      //carregamento
      for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

          printf(GREEN"."RESET);
          fflush(stdout);
          usleep(500000); //atraso de 0,5s
        }
        printf("\b\b\b   \b\b\b");
        fflush(stdout);
      }
      
      printf(GREEN "Nenhum resultado encontrado para '%s'.\n" RESET, pesquisa);
      break;
    }
    case 2: {
      scanner = system("clear");
      int escolhaPlaylist;
      printf(GREEN "----SUAS PLAYLISTS----\n" RESET);
      printf(GREEN "1. Favoritas\n" RESET);
      printf(GREEN "2. Rock Nacional\n" RESET);
      printf(GREEN "3. Sertanejas\n" RESET);
      printf(GREEN "Escolha uma playlist para ver detalhes ou qualquer outra "
                   "tecla para voltar: " RESET);
      scanner = scanf("%d", &escolhaPlaylist);
      if (scanner != 1) {
        printf(GREEN "Entrada inválida. Tente novamente.\n" RESET);
        while (getchar() != '\n')
          ; // Limpa o buffer de entrada
        continue;
      }

      switch (escolhaPlaylist) {
      case 1:
        scanner = system("clear");
        printf(GREEN "Playlist 'Favoritas':\n" RESET);
        printf(GREEN "1. Save Your Tears - The Weeknd\n" RESET);
        printf(GREEN "2. Before You Go - Lewis Capaldi\n" RESET);
        break;
      case 2:
        scanner = system("clear");
        printf(GREEN "Playlist 'Rock Nacional':\n" RESET);
        printf(GREEN "1. Meu Erro - Paralamas do Sucesso\n" RESET);
        printf(GREEN "2. Tédio - Bíquini Cavadão\n" RESET);
        break;
      case 3:
        scanner = system("clear");
        printf(GREEN "Playlist 'Sertanejas':\n" RESET);
        printf(GREEN "1. Largado às Traças - Zé Neto e Cristiano\n" RESET);
        printf(GREEN "2. Amor de Violeiro - Eduardo\n" RESET);
        break;
      default:
        scanner = system("clear");
        printf(GREEN "Playlist não encontrada.\n" RESET);
        break;
      }

      int escolhaMusica;
      printf(GREEN "Escolha uma música para tocar: " RESET);
      scanner = scanf("%d", &escolhaMusica);
      if (scanner != 1) {
        printf(GREEN "Entrada inválida. Tente novamente.\n" RESET);
        while (getchar() != '\n')
          ; // Limpa o buffer de entrada
        break;
      }

      switch (escolhaPlaylist) {
      case 1:
        scanner = system("clear");
        if (escolhaMusica == 1)
          printf(GREEN "Tocando 'Save Your Tears' - The Weeknd\n" RESET);
        else if (escolhaMusica == 2)
          printf(GREEN "Tocando 'Before You Go' - Lewis Capaldi\n" RESET);
        else
          printf(GREEN "Opção inválida.\n" RESET);
        break;
      case 2:
        scanner = system("clear");
        if (escolhaMusica == 1)
          printf(GREEN "Tocando 'Meu Erro' - Paralamas do Sucesso\n" RESET);
        else if (escolhaMusica == 2)
          printf(GREEN "Tocando 'Tédio' - Bíquini Cavadão\n" RESET);
        else
          printf(GREEN "Opção inválida.\n" RESET);
        break;
      case 3:
        scanner = system("clear");
        if (escolhaMusica == 1)
          printf(GREEN
                 "Tocando 'Largado às Traças' - Zé Neto e Cristiano\n" RESET);
        else if (escolhaMusica == 2)
          printf(GREEN "Tocando 'Amor de Violeiro' - Eduardo\n" RESET);
        else
          printf(GREEN "Opção inválida.\n" RESET);
        break;
      }

      break;
    }
    case 3:
        scanner = system("clear");
        printf(GREEN "Esse é o top 5 mais ouvidas pelo mundo:\n" RESET);
        printf(GREEN "'Blinding Lights' - The Weeknd\n" RESET);
        printf(GREEN "'Shape of You' - Ed Sheeran\n" RESET);
        printf(GREEN "'Someone You Loved' - Lewis Capaldi\n" RESET);
        printf(GREEN "'Sunflower' - Post Malone and Swae Lee\n" RESET);
        printf(GREEN "'Star Boy' - The Weeknd\n" RESET);
        break;
    case 4:
      scanner = system("clear");
      printf(GREEN "See you next time!\n" RESET);
      break;
    default:
      printf(GREEN "Inválido, tente novamente!\n" RESET);
      getchar(); // Consome o caractere de nova linha deixado por scanf
      break;
    }
    printf(GREEN "Pressione Enter para continuar..." RESET);
    getchar(); // Aguarda o usuário pressionar Enter
    getchar(); // Consome o Enter adicional
  }

  return 0;
}