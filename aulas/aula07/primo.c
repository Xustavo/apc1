#include <stdio.h>

int main(){

  int n = 0;
  int qtd_divisores = 0;

  printf("Entre com um número: ");
  int scanner = scanf("%i", &n);

  for(int i = 1; i <= n; i++){

    if(n % i == 0){
      qtd_divisores++;
      
    }
  }
  if(qtd_divisores == 2){

    printf("É um número primo!\n");
  }else{

    printf("Não é um número primo.\n");
  }
  
  return 0;
}