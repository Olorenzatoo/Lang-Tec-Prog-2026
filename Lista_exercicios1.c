#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicio6();
void exercicio7();
void exercicio8();

int main() {

    int opcao;

    printf("\n========== MENU DE EXERCICIOS ==========\n");
    printf("1 - Numeros em ordem inversa\n");
    printf("2 - Notacao cientifica\n");
    printf("3 - Numero em base binaria\n");
    printf("4 - Salario + comissao\n");
    printf("5 - Soma, media e produtorio\n");
    printf("6 - Idade em anos, meses e dias\n");
    printf("7 - Volume de uma esfera\n");
    printf("8 - Distancia euclidiana\n");
    printf("0 - Sair\n");
    printf("=========================================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: 
			exercicio1(); 
			break;
        case 2: 
			exercicio2(); 
			break;
        case 3: 
			exercicio3(); 
			break;
        case 4: 
			exercicio4(); 
			break;
        case 5: 
			exercicio5(); 
			break;
	    case 6: 
			exercicio6(); 
			break;
        case 7: 
			exercicio7();
			break;
        case 8: 
			exercicio8(); 
			break;
        default: 
			printf("Ok, ate mais...");
    }

    return 0;
}
void exercicio1() {
    int num1, num2, inversor;

    printf("\n========== Exercicio 1 ==========\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    inversor = num1;
    num1 = num2;
    num2 = inversor;

    printf("\nPrimeiro valor: %d", num1);
    printf("\nSegundo valor: %d", num2);
}
void exercicio2() {
    double valorInicial, numNotacao;
    int expoente;

    printf("\n========== Exercicio 2 ==========\n");
    printf("Digite um valor: ");
    scanf("%lf", &valorInicial);

    expoente = (int)floor(log10(valorInicial));
    numNotacao = valorInicial / pow(10, expoente);

    printf("Notacao cientifica: %.2lf x 10^%d", numNotacao, expoente);
}
void exercicio3() {
    int n, res;
    int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;

    printf("\n========== Exercicio 3 ==========\n");
    printf("Insira o valor <= 64: ");
    scanf("%d", &n);

    bit_64 = n % 2;
    res = n / 2;
    bit_32 = res % 2;
    res = res / 2;
    bit_16 = res % 2;
    res = res / 2;
    bit_8 = res % 2;
    res = res / 2;
    bit_4 = res % 2;
    res = res / 2;
    bit_2 = res % 2;
    res = res / 2;

    printf("O numero %d em binario = %d%d%d%d%d%d%d", n, res % 2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
}
void exercicio4() {
    double salarioFixo, vendasTotais;

    printf("\n========== Exercicio 4 ==========\n");
    printf("Digite o salario fixo: ");
    scanf("%lf", &salarioFixo);
    printf("Digite o valor total de vendas: ");
    scanf("%lf", &vendasTotais);

    printf("Total a receber: %.2lf", salarioFixo + vendasTotais * 0.15);
}
void exercicio5() {
    int valor1, valor2, valor3, valor4, soma;
    float media;

    printf("\n========== Exercicio 5 ==========\n");

    printf("Digite quatro valores: ");
    scanf("%d %d %d %d", &valor1, &valor2, &valor3, &valor4);

    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4.0;

    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", media);
}
void exercicio6() {
    int idadeDias, anos, meses, dias;

    printf("\n========== Exercicio 6 ==========\n");
    printf("Digite sua idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    idadeDias = idadeDias % 365;
    meses = idadeDias / 30;
    dias = idadeDias % 30;

    printf("Idade: %d ano(s) - %d mes(es) - %d dia(s)", anos, meses, dias);
}
void exercicio7() {
    double R, volume;

    printf("\n========== Exercicio 7 ==========\n");
    printf("Digite o raio da esfera: ");
    scanf("%lf", &R);

    volume = (4.0 / 3) * 3.14159 * pow(R, 3);

    printf("Volume da esfera: %.2lf", volume);
}
void exercicio8() {
    double x1, y1, x2, y2, distancia;

    printf("\n========== Exercicio 8 ==========\n");

    printf("Digite x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia euclidiana: %.2lf", distancia);
}
