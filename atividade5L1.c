/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
  int nElementos=0, numVerificado,contadorN;// variaveis para receber o numero de elementos do vetor e o contador de repetição do numero inseridos.
  printf("Digite o numero de elementos do vetor: ");
  scanf("%d", &nElementos);
  int vetElementos[nElementos];// declarando o vetor com as posições informadas pelo usuário.
  printf("Digite os valores que vao compor o vetor: ");
  for(int i=0; i<nElementos; i++){
      scanf("%d", &vetElementos[i]);
  }// lendo os elementos do vetor.
  
   printf("Informe o valor a ser veríficado: ");
   scanf("%d",&numVerificado);
   
    for(int i=0; i<nElementos; i++){
      printf("%d |",vetElementos[i]);
      if(vetElementos[i] == numVerificado){
      contadorN++;
      }
  }// estrutura de decisão para contar quantas vezes o numero foi repetido.
  
  printf ("\nO numero %d aparece %d vez(es) no vetor.",numVerificado , contadorN);
  return 0;
}