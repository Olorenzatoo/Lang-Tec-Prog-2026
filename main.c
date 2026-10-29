//NÃO ESTÁ PRONTO!!!!

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, posicao, listaNum[10], listaMaior[10], utilizado[10] = {0};
	
	for(i = 0; i < 10; i++){
		printf("Escreva o %d numero: ", (i + 1));
		scanf("%d", &listaNum[i]);
	}
	
	int maior = listaNum[0];
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(utilizado[j] == 0){
				if(maior < listaNum[j]){
					maior = listaNum[j];
					posicao = j;
					listaMaior[i] = maior;
				}
			}
		}
		utilizado[posicao] = 1;
		maior = 0;
	}	
	
	for(i = 0; i < 10; i++){
		printf("%d ", listaMaior[i]);
	}
	
	
	return 0;
}
