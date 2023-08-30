/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char message[1001];
    setbuf(stdin,NULL);// limpando buffer do teclado.
    gets(message);// recebendo a mensagem codificada.
    int tamanho=0;
    tamanho = strlen(message);
    for(int i = 0; i<tamanho; i++){// a estrutura de decisão descrita tem a função de encontrar todos os 'p' minusculos e printar o caractere da frente já que é o caractere original da frase, e um outro if para identificar os espaços digitados na mensagem.
        if (message[i] == ' '){
            printf(" ");
        }
        if (message[i] == 'p'){
            i++;
            printf("%c", message[i]);
        }
    }
    return 0;
}
