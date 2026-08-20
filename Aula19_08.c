#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, z, maiorAB, maiorABC;
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &x);
	printf("Escreva o segundo valor: ");
	scanf("%d", &y);
	printf("Escreva o terceiro valor: ");
	scanf("%d", &z);
	
	maiorAB = (x + y + abs(x-y)) / 2;
	
	maiorABC = (maiorAB + z + abs(maiorAB-z)) / 2;
	
	printf("Eh o maior: %d", maiorABC);
	
	return 0;
}
