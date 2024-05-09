/*
  4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma letra, um dígito ou um caractere especial.
*/

#include <stdio.h>

int main(){

  char a;

  printf("Entre com um caracter qualquer: ");
  int scanner = scanf("%c", &a);

  if(a >= 48 && a <= 57){

    printf("É um número!\n");
    
  } else if(a >= 65 && a <= 90){

    printf("É uma letra maiúscula!\n");
    
  }else if (a >= 97 && a <= 122){

    printf("É uma letra minúscula!\n");
    
  }  else {
  
    printf("É um caracter especial!\n");
  
  }
  
  return 0;
}