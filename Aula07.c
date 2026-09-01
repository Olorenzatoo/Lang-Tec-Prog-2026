#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Digite um numero entre 1 a 9: ");
	scanf("%d", &numero);
	
	
	if(numero > 0 && numero < 10){
		if(numero % 1 == 0 && numero % numero == 0){
			
			printf("Esse numero e primo!\n");
			printf("O dobro desse numero e: %d", (numero * 2));	
		}else{
			
			printf("Esse numero nao e primo!\n");
			
			if(numero % 2 == 0){
				
				printf("Porem, ele e Par!\n");
				printf("O resultado da soma com dois: %d", numero + 2);
			} else{
				
				printf("Porem, ele e impar!\n");
				printf("O numero anterior e sucessor e respectivamente: %d < %d > %d", numero - 1, numero, numero + 1);
			}
		}	
	}else{
		printf("_out_of_range");
	}
		
	return 0;
}
