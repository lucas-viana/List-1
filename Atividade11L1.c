/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float LowValue(float vetElements[], int nElementos){// função que identifica o menor valor e retorna o valor para o metodo, caso seja necessário utilizalo em algum outro lugar.
    float lowValue = vetElements[0];
    
    for(int i=1; i<nElementos;i++){
        if(vetElements[i]<lowValue){
        lowValue=vetElements[i];
        }
    }
    return lowValue;
}

float HighestValue(float vetElements[], int nElementos){// função que identifica o maior valor e retorna o valor para o metodo, caso seja necessário utilizalo em algum outro lugar.
    float highestValue = vetElements[0];
    
    for(int i=1; i<nElementos;i++){
        if(vetElements[i]>highestValue){
        highestValue=vetElements[i];
        }
    }

    return highestValue;
}
int main()
{
    float vetElements[5], result;
    for(int i = 0; i<5;i++){// lendo o vetor
        scanf("%f",&vetElements[i]);
        result+=vetElements[i];
    }
    
    result = result-LowValue(vetElements,5) - HighestValue(vetElements,5);//calculo utilizando as funções criadas
    printf("%.1f\n", result);
    return 0;
}
