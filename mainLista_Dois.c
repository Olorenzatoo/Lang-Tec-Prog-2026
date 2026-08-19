#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("========== Exercicio 1 ===========\n");
	
	int idade, anoAtual, anoNasci;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	anoNasci = anoAtual - idade;
	
	printf("Voce nasceu aproximadamente no ano de %d.\n", anoNasci);
	
	printf("\n\n========== Exercicio 2 ===========\n");
	
	float quilometrosHora, metrosSegundo;
	
	printf ("Digite a velocidade em km/h: ");
	scanf("%f", &quilometrosHora);
	
	metrosSegundo = quilometrosHora / 3.6;
	
	printf("A velocidade em m/s e %.2f.\n", metrosSegundo);
	
	printf("\n\n========== Exercicio 3 ===========\n");
	
	float reais, dolares, cotacao_dolar;
	
	printf("Escreva o valor em reais: ");
	scanf("%f", &reais);
	printf("Escreva a cotacao do dolar: ");
	scanf("%f", &cotacao_dolar);
	
	dolares = reais / cotacao_dolar;
	
	printf("O valor em dolares e U$ %.2f.\n", dolares);
	
	printf("\n\n========== Exercicio 4 ===========\n");
	
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32.0;
	
	printf("A temperatura em fahrenheit e %.2f.\n", fahrenheit);
	
	printf("\n\n========== Exercicio 5 ===========\n");
	
	float graus, radianos;
	const float PI = 3.141592;
	
	printf("Digite o angulo em graus: ");
	scanf("%f", &graus);
	
	radianos = graus * (PI / 180.0);
	
	printf("O angulo em radianos e %.3f.\n", radianos);
	
	printf("\n\n========== Exercicio 6 ===========\n");
	
	int a;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &a);
	
	printf("\nO valor sucessor e: %d", a + 1);
	printf("\nO valor antecessor e: %d", a - 1);
	
	printf("\n\n========== Exercicio 7 ===========\n");
	
	double valor = 780000;
	
	printf("O valor recebido pelo primeiro ganhador e: %.2lf", (valor / 100) * 46 );
	printf("\nO valor recebido pelo segundo ganhador e: %.2lf", (valor / 100) * 32);
	printf("\nO valor recebido pelo terceiro ganhador e: %.2lf", (valor / 100) * 22);
	
	printf("\n\n========== Exercicio 8 ===========\n");
	
	int duracaoSegundos, horas, minutos, segundos;
	
	printf("Escreva a duracao de um evento em segundos: ");
	scanf("%d", &duracaoSegundos);
	
	horas = duracaoSegundos / 3600;
	duracaoSegundos = duracaoSegundos % 3600;
	
	minutos = duracaoSegundos / 60;
	segundos = duracaoSegundos % 60;
	
	printf("O tempo desse evento sera de: %d:%d:%d", horas, minutos, segundos);
	
	printf("\n\n========== Exercicio 9 ===========\n");
	
	int tempoGasto, veloMedia, distancia;
	double litros;
	
	printf("Escreva quantas horas foram necessarias para essa viagem: ");
	scanf("%d", &tempoGasto);
	
	printf("Escreva a media de velociadade durante a viagem: ");
	scanf("%d", &veloMedia);
	
	distancia = tempoGasto * veloMedia;
	
	litros = distancia / 12;
	
	printf("Seriam necessarios %.3lf para completar a viagem.", litros);
	
	printf("\n\n========== Exercicio 10 ===========\n");
	
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
	
	printf("\n\n========== Eh o expecialista, não tem jeito! ===========\n");	
	return 0;
}
