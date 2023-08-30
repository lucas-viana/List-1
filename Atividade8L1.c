#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL)); //Inicializando a semente no tempo atual
	int n, i, um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0;
	
	printf("Digite o numero de vezes que o dado foi lancado: ");
	scanf("%d", &n);
	int dado[n];
	for(i=0; i<n; i++){
		dado[i]= rand() %6 + 1;//gerando dados aleatórios de 1 a 6
		
		switch (dado[i]){//sempre que cair em uma face, seu respectivo contador será incrementado
			case 1:
				um++;
				break;
			case 2:
				dois++;
				break;
			case 3:
				tres++;
				break;
			case 4:
				quatro++;
				break;
			case 5:
				cinco++;
				break;
			case 6:
				seis++;
				break;				
		}

	}
	printf("A face 1 foi mostrada %d vezes.\n", um);
	printf("A face 2 foi mostrada %d vezes.\n", dois);
	printf("A face 3 foi mostrada %d vezes.\n", tres);
	printf("A face 4 foi mostrada %d vezes.\n", quatro);
	printf("A face 5 foi mostrada %d vezes.\n", cinco);
	printf("A face 6 foi mostrada %d vezes.\n", seis);				
}
