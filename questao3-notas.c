// 3) Desenvolva um programa, na linguagem C, que receba as notas dos quatro
// bimestres de um aluno e informe se ele está de recuperação ou não. Caso esteja, o
// programa deve informar qual a nota necessária para o aluno passar.
// Importante : o programa não deve ter uma média pré-determinada. O usuário é
// quem deve informar qual o valor da média que instituição utiliza.

#include <stdio.h>
int main(){

   float mediaUtilizada = 0;
   float nota1 = 0;
   float nota2 = 0;
   float nota3 = 0;
   float nota4 = 0;
   float mediaAluno = 0;
   float notaNecessaria = 0;
   
   printf("Digite a média: ");
   scanf("%f", &mediaUtilizada);
   
   printf("Nota do primeiro bimestre: ");
   scanf("%f", &nota1);
   
   printf("Nota do segundo bimestre: ");
   scanf("%f", &nota2);
   
   printf("Nota do terceiro bimestre: ");
   scanf("%f", &nota3);
   
   printf("Nota do quarto bimestre: ");
   scanf("%f", &nota4);
   
   
   mediaAluno = (nota1 + nota2 + nota3 + nota4)/ 4;
   
   if(mediaAluno < mediaUtilizada){
       
       printf("Reprovado\n");
  
      notaNecessaria = mediaUtilizada - mediaAluno;
      printf("Nota necessária: %.2f", notaNecessaria);
       
   }else{
       printf("Aprovado.\n");
   }

return 0;
}