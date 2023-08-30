/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
    int qtdElementos;//variavel da quantidade de elementos
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &qtdElementos);
    int vetUm[qtdElementos], vetDois[qtdElementos], vetTres[qtdElementos]; // declaração dos vetores
    
    printf("Digite os valores do vetor um: ");
    for(int i=0; i<qtdElementos; i++){//lendo vetor 1
        
        scanf("%d", &vetUm[i]);
    }
    
    printf("Digite os valores do vetor dois: ");
     for(int i=0; i<qtdElementos; i++){// lendo vetor 2
        scanf("%d", &vetDois[i]);
    }
    
    printf ("Resultado da multiplicação dos indices semelhantes dos vetores: \n");
     for(int i=0; i<qtdElementos; i++){// multiplicação dos vetores  
        vetTres[i] = vetUm[i]*vetDois[i];
        printf("%d\t", vetTres[i]);
    }
  return 0;
}
