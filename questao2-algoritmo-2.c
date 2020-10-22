//2) Desenvolva um algoritmo, na linguagem C, que peça ao usuário para digitar
// números diferentes de zero. Enquanto esses números forem diferentes de zero, o
// código deve acumular apenas os números pares e, quando o usuário digitar zero,
// deve aparecer em tela a soma apenas dos números pares.

#include <stdio.h>
int main()
{
  float somaDosPares = 0;
  int valor;
  do
  {
    printf("Digite o valor");
    scanf("%d", &valor);

    if ((valor % 2) == 0)
    {
      somaDosPares = somaDosPares + valor;
    }
  } while (valor != 0);
  printf("Soma dos pares = %.2f", somaDosPares);

  return 0;
}