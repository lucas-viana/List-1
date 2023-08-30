/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
float HighestValue(float vetElements[], int nElementos){// função que identifica o maior valor, mostra ele na tela atraves do metodo printf, e retorna o valor para o metodo, caso seja necessário utilizalo em algum outro lugar.
    float highestValue = vetElements[0];
    
    for(int i=1; i<nElementos;i++){
        if(vetElements[i]>highestValue){
        highestValue=vetElements[i];
        }
    }
    printf("\nO maior elemento é: %.2f", highestValue);
    return highestValue;
}
int main ()
{
    int nElementos;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &nElementos);
    float vetElements[nElementos];
    printf("Digite o valor dos elementos: ");
    for(int i=0; i<nElementos;i++){
        scanf("%f", &vetElements[i]);
    }
    for(int i=0; i<nElementos;i++){
        printf("%.2f |", vetElements[i]);
    }
    HighestValue(vetElements,nElementos);
  return 0;
}
