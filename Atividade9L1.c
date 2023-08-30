/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main ()
{
    char vetor[101];
    int tamanho;
    gets(vetor);
    tamanho = strlen(vetor);
    for(int i=tamanho-1; i>=0; i--){// lógica aplicada para ler o vetor de tras pra frente.
        printf("%c",vetor[i]);
    }
  return 0;
}
