/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/

#include <stdio.h>

int main(){

  const float IR = 0.25f;
  const float INSS = 0.11f;
  float valor_da_hora = 150.0f;
  float horas_trabalhadas = 0.0f;

  printf("Informe as horas trabalhadas: ");
  int scanner = scanf("%f", &horas_trabalhadas);
  if(horas_trabalhadas < 0 || horas_trabalhadas == 0){
    printf("invalido\n");
    return 1;
  }

  float salario_bruto = valor_da_hora * horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  printf("\x1b[32m----------------------------\n");
  printf("        CONTRACHEQUE        \n");
  printf("----------------------------\n");
  printf("Salario Bruto..: R$ %5.2f\n", salario_bruto);
  printf("Imposto renda..: R$ %6.2f\n", imposto_renda);
  printf("Imposto previ..: R$ %6.2f\n", imposto_previ);
  printf("Salario Liquido: R$ %1.2f\x1b[0m\n", salario_liquido);

  return 0;
}

