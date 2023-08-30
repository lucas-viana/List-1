#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
	srand(time(NULL)); //Inicializando a semente no tempo atual
	int n, i, palpite, posicaoPalp;
	bool verifica=false;
	
	printf("Digite a quantidade de numeros a serem inseridos no vetor:" );
	scanf("%d", &n);
	int vetor[n];
	
	for (i=0; i<n; i++){
		vetor[i]= rand() %100 + 1; // adiciona um número entre 1 e 100 à posição i do vetor
		
	} 
	
	printf("Digite um numero: ");
	scanf("%d", &palpite);
	
	for (i=0; i<n; i++){
		if(palpite==vetor[i]){
			verifica=true;
			posicaoPalp=i; //captura a posição do palpite verdadeiro
			break; //só precisamos saber se está no vetor, portanto paramos na primeira posição que encontrar
		}
	}
	if(verifica){
		printf("Numero digitado estah no vetor, na posicao %d.\n", posicaoPalp);
	} else{
		printf("Numero digitado nao estah no vetor.\n");
	}
	for (i=0; i<n; i++){	
	printf("Vetor[%d]: %d\n", i, vetor[i]);
}
return 0;
}
