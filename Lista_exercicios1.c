#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, inversor;
	
	printf("========== Exercicio 1 ==========\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);	
	
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);	
	
	inversor = num1;
	num1 = num2;
	num2 = inversor;
	
	printf("\nValores invertidos: ");
	printf("\nPrimeiro valor: %d", num1);
	printf("\nSegundo valor: %d", num2);
	
	printf("\n\n========== Exercicio 2 ==========\n");
	
	//importei a biblioteca de matematica para resolver esse exercicio, você disse que não podia usar laços 
    double valorInicial, numNotacao;
    int expoente;
    
    printf("OBS: importei a biblioteca <math.h> nao sabia se podia ou nao, mas sem laco nao da pra fazer milagre\n\n");

    printf("Digite um valor: ");
    scanf("%lf", &valorInicial);

    expoente = (int)floor(log10(valorInicial));
    numNotacao = valorInicial / pow(10, expoente);

    printf("\nNumero na forma de notacao cientifica: %.2lf x 10^%d\n", numNotacao, expoente);
    
    printf("\n\n========== Exercicio 3 ==========\n");
    
    int valorDecimal;
    
    printf("Digite um valor <= 64: ");
	scanf("%d", &valorDecimal);	
	
	if (valorDecimal <= 0 || valorDecimal > 64) {
	    printf("Valor invalido!\n");
	}else {
		printf("\nRepresentacao binaria de %d: ", valorDecimal);
		printf("%d", (valorDecimal >> 7) & 1);
		printf("%d", (valorDecimal >> 6) & 1);
		printf("%d", (valorDecimal >> 5) & 1);
        printf("%d", (valorDecimal >> 4) & 1);
        printf("%d", (valorDecimal >> 3) & 1);
        printf("%d", (valorDecimal >> 2) & 1);
        printf("%d", (valorDecimal >> 1) & 1);
        printf("%d", valorDecimal & 1);
    }
    printf("\n\n========== Exercicio 4 ==========\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    
	return 0;
}
