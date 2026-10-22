#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, lista[10], listaMaior[10];
	
	for(i = 0; i < 10; i++){
		printf("Escreva o primeiro numero: ", (i + 1));
		scanf("%d", &lista[i]);
	}
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			
			if(lista[i] > lista[j]){
				listaMaior[i] = lista[i];
			}
			
		}
		printf("%d", listaMaior[i]);
	}
		
	
	
	
	
	return 0;
}
