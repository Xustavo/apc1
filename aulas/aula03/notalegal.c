#include <stdio.h>

int main() {

  printf("\x1b[33m----------------------------\n");
  printf("         NOTA LEGAL         \n");
  printf("----------------------------\n");
  printf("ITEM             QTD   VALOR\n");
  printf("%-16s %03i %7.2f\n", "Banana nanica", 1, 15.00);
  printf("%-16s %03i %7.2f\n", "Maca fuji", 10, 50.00);
  printf("%-16s %03i %7.2f\n", "Uva globo", 5, 26.00);
  //printf("Banana nanica     1    15.00\n");
  //printf("Maca fuji         10   50.00\n");
  //printf("Uva globo         5    26.00\n");
  printf("----------------------------\n");
  printf("TOTAL.......:    R$  %7.2f\x1b[0m\n", 91.00);

  return 0;
}