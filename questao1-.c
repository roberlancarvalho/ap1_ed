// 4) Analise o código abaixo e responda ao que se pede:
// a) Qual o principal objetivo do programa?
// R: Para o usuário digitar um nome, contendo no máximo 25 caracteres.

// b) Existem erros? Se sim, quais?
// R: A estrutura de repetição limita à 4 repetições, quando deve ser do tamanho de nome.

#include <stdio.h>
#include <string.h>
int main()
{
  char nome[25];
  printf("Digite um nome:");
  fflush(stdout);
  fgets(nome, 25, stdin);
  for (int i = 0; i < 4; ++i)
    printf("%c", nome[i]);
  {
  }
  printf("\n");
  return 0;
}