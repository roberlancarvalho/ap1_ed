// Calculadora correta

#include <stdio.h>

int main(void)
{
  float x = 0, y = 0, resultado = 0;
  int operacao = 0;
  do
  {
    printf("\n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");
    fflush(stdout);
    scanf("%d", &operacao);
    printf("Digite o primeiro número: ");
    fflush(stdout);
    scanf("%f", &x);

    printf("Digite o segundo número: ");
    fflush(stdout);
    scanf("%f", &y);

    switch (operacao)
    {
    case 1:
      resultado = x + y;
      break;

    case 2:
      resultado = x - y;
      break;

    case 3:
      resultado = x * y;
      break;

    case 4:
      resultado = x / y;
      break;

    default:
      printf("\n Digite uma opção valida\n");
      break;
    }

    printf("\n O resultado é: %.2f", resultado);
    printf("\n Digite 1 para continuar: ");
    fflush(stdout);
    scanf("%d", &operacao);

  } while (operacao == 1);
  return 0;
}