/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int ContaImpar(int vetElementos[], int nElementos){// Estrutura de seleção que deferencia numeros pares de impares e incrementam um contadot que é retornado na função.
    int contadorImpar=0;
    for(int i=0; i<nElementos; i++){
        if(vetElementos[i]%2 != 0){
           contadorImpar++;
        }
    }
    printf("O vetor contem %d numeros impares.",contadorImpar);
    return contadorImpar;
}
int main()
{
    int nElementos;
    printf("Digite o numero de posições do vetor: ");
    scanf("%d", &nElementos);
    int vetElementos[nElementos];
    printf("Digite o valor dos elementos do vetor: ");
    for(int i=0; i < nElementos; i++){
        scanf("%d", &vetElementos[i]);
    }
    ContaImpar(vetElementos, nElementos);
    return 0;
}
