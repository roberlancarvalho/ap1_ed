// 1) O código a página seguinte, desenvolvido na linguagem C, faz parte de uma
// calculadora, que deve conter as seguintes funcionalidades:

#include<stdio.h>
int main (void){ //não tem retorno
  float x=0, y=0, resultado=0;
  int operacao=0;
  do{
    printf("\n 1 - SOMA\n 2 - SUBTRAÇÃO\n 3 - MULTIPLICAÇÃO\n 4 - DIVISÃO\n");
    fflush(stdout);
    scanf("%f", &operacao); //O correto seria "%d" porque é um valor Inteiro, o "%f" é para Float
    printf("\nDigite o primeiro primeiro número: ");
    fflush(stdout);
    scanf("%d", &x); //O correto seria "%d" porque é um valor Inteiro, o "%f" é para Float
    printf("\nDigite o primeiro segundo número: ");
    fflush(stdout);
    scanf("%d", &y); //O correto seria "%d" porque é um valor Inteiro, o "%f" é para Float
    switch (operacao){
    case 1:
      resultado = x+y;
      break;
    case 2:
      resultado = x-y;
      break;
    case 3:
      resultado = x/y;
      break;
    case 4:
      resultado = x*y;
      break;
    default:
    printf("\n Digite uma opão válida\n");
      break;
    }
    printf("\n O resultado é: %0.2d", resultado); //Ao invés de d, o correto seria um f, pois para Float
    printf("\n Digite 1 para continuar: ");
    fflush(stdout);
    scanf("%d", &operacao);

  } while (operacao==1);
  
  // Deveria ter, por padrão o "return 0;" no final.
}