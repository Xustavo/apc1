#include <stdio.h>
#include <math.h>

int main(){

  int operacao;

  int numero1;
  int numero2;

  printf("Informe o primeiro número: ");
  int scanner1 = scanf("%i", &numero1);

  printf("Informe o segundo número: ");
  int scanner2 = scanf("%i", &numero2);

  printf("Opção 1: soma\n");
  printf("Opção 2: subtração\n");
  printf("Opção 3: multiplicação\n");
  printf("Opção 4: divisão\n");
  printf("Opção 5: raiz\n");
  printf("Opção 6: potencia\n");
  printf("Opção 7: log2\n");
  printf("Opção 8: seno\n");
  
  printf("Escolha a operação que deseja fazer: ");
  int operacao_escolhida = scanf("%i", &operacao);

  if(operacao == 1){

    float soma = numero1 + numero2;
    printf("A soma dos números é: %.2f\n", soma);
    
  }else if(operacao == 2){

    float subtracao = numero1 - numero2;
    printf("A subtração dos números é: %.2f\n", subtracao);
    
  }else if(operacao == 3){

    float multiplicacao = numero1 * numero2;
    printf("A multiplicação dos números é: %.2f\n", multiplicacao);
    
  }else if(operacao == 4){

    if(numero2 == 0){

      printf("Divisão por 0 é indeterminação!\n");
    }else{

      float divisao = 1.0f * numero1 / numero2;
      printf("A divisão dos números é: %.2f\n", divisao);

      int resto = numero1 % numero2;
      printf("O resto da divisão é: %i\n", resto);
    }
    
  }else if(operacao == 5){

    double raiz_quadrada = sqrt(numero1 && numero2);
    printf("As raízes dos números são, respectivamente %i e %i\n", numero1, numero2);
    
  }else if(operacao == 6){

    int p;
    
    printf("Escreva a potência desejada: ");
    int scanner4 = scanf("%i", &p);

    int numero_elevado;
    printf("Opção 1: número 1\n");
    printf("Opção 2: número 2\n");
    printf("Fale o número que deseja elevar: ");
    int scanner5 = scanf("%i", &numero_elevado);

    if(numero_elevado == 1){

       double potencia = pow(numero1, p);
      printf("O resultado é: %.2f", potencia);
      
    }else{

      double potencia = pow(numero2, p);
      printf("O resultado é: %.2f", potencia);
    }
    
  }else if (operacao == 7){

    double logaritmo2 = log2(numero1 && numero2);
    printf("O logaritmo na base 2 dos números é: %f", logaritmo2);
    
  }else{

    const double PI = 3.1416;
    int s;

    printf("Opção 1: número 1\n");
    printf("Opção 2: número 2\n");
    printf("Fale o número que deseja saber o seno: ");
    int scanner6 = scanf("%i", &s);

    if(s == 1){

      double seno = sin(numero1 *(PI / 180));
      printf("O seno do primeiro número é: %.2f\n", seno);
    }else{

      double seno = sin(numero2 *(PI / 180));
      printf("O seno do segundo número é: %.2f\n", seno);
    }
  }

  
  return 0;
}