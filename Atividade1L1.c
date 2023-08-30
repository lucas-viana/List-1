/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int SumElements(int vetElements[], int quantityPosition){//função criada para receber um vetor de elementos inteiros e quantidade de elementos printar o resultado final e retornar o resultado final para a função.
    int result=0;
    for(int i=1; i<=quantityPosition;i++){
        result += vetElements[i];
    }
    printf("Soma dos elementos: %d", result);
    return result;
}
int main()
{
    int nElementos=0, values=0;// variaveis para receber o número de elementos do vetor e os valores que serão lidos.
printf("Digite o numero de elementos da matriz: ");    
scanf("%d", &nElementos);
printf("Entre com os valores dos elementos: ");
int vetElements[nElementos];//declarando o vetor, já com a quantidade de elementos que ele vai possuir.

for(int i=1; i<=nElementos; i++){// laço for para ler os valores e inseri-los na matriz.
    scanf("%d", &values);
    vetElements[i] = values;
}
SumElements(vetElements,nElementos);// chamando a função para calcular a soma e printar o resultado.
    return 0;
}