#include <stdio.h>

int main(){
  signed char caracter_com_sinal; //-128 a 127
  unsigned char caracter_sem_sinal; //0 a 255

  signed int inteiro_com_sinal; // 4bytes -2bi a 2bi
  unsigned int inteiro_sem_sinal; //0 a 4bi

  short int inteiro_curto_com_sinal; // 2bytes -32mil a 32mil
  unsigned short int inteiro_curto_sem_sinal; // 0 a 65mil

  long int inteiro_longo_com_sinal; // 8bytes -9hexa a 9hexa
  unsigned long int inteiro_longo_sem_sinal; // 0 a 18hexa

  long double longo_duplo; // -1.2e+4932 a 1.2e+4932
  
  return 0;
}