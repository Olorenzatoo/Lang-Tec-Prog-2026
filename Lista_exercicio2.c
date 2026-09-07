#include <stdio.h>
#include <stdlib.h>

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicio6();
void exercicio7();
void exercicio8();
void exercicio9();
void exercicio10();

int main() {

    int opcao;

    printf("\n========== MENU DE EXERCICIOS ==========\n");
    printf("1 - Idade e ano de nascimento\n");
    printf("2 - Conversao de km/h para m/s\n");
    printf("3 - Conversao de reais para dolares\n");
    printf("4 - Celsius para Fahrenheit\n");
    printf("5 - Graus para radianos\n");
    printf("6 - Sucessor e antecessor\n");
    printf("7 - Divisao de premio\n");
    printf("8 - Conversao de segundos\n");
    printf("9 - Consumo de combustivel\n");
    printf("10 - Maior entre tres valores\n");
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
        case 9:
            exercicio9();
            break;
        case 10:
            exercicio10();
            break;
        default:
            printf("Ok, ate mais...");
    }

    return 0;
}
void exercicio1() {

    int idade, anoAtual, anoNasci;

    printf("\n========== Exercicio 1 ==========\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNasci = anoAtual - idade;

    printf("Voce nasceu aproximadamente no ano de %d.\n", anoNasci);
}
void exercicio2() {

    float quilometrosHora, metrosSegundo;

    printf("\n========== Exercicio 2 ==========\n");

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &quilometrosHora);

    metrosSegundo = quilometrosHora / 3.6;

    printf("A velocidade em m/s e %.2f.\n", metrosSegundo);
}
void exercicio3() {

    float reais, dolares, cotacao_dolar;

    printf("\n========== Exercicio 3 ==========\n");

    printf("Escreva o valor em reais: ");
    scanf("%f", &reais);

    printf("Escreva a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);

    dolares = reais / cotacao_dolar;

    printf("O valor em dolares e U$ %.2f.\n", dolares);
}
void exercicio4() {

    float celsius, fahrenheit;

    printf("\n========== Exercicio 4 ==========\n");

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura em fahrenheit e %.2f.\n", fahrenheit);
}
void exercicio5() {

    float graus, radianos;
    const float PI = 3.141592;

    printf("\n========== Exercicio 5 ==========\n");

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("O angulo em radianos e %.3f.\n", radianos);
}
void exercicio6() {

    int a;

    printf("\n========== Exercicio 6 ==========\n");

    printf("Escreva um numero inteiro: ");
    scanf("%d", &a);

    printf("\nO valor sucessor e: %d", a + 1);
    printf("\nO valor antecessor e: %d", a - 1);
}
void exercicio7() {

    double valor = 780000;

    printf("\n========== Exercicio 7 ==========\n");

    printf("O valor recebido pelo primeiro ganhador e: %.2lf",
           (valor / 100) * 46);

    printf("\nO valor recebido pelo segundo ganhador e: %.2lf",
           (valor / 100) * 32);

    printf("\nO valor recebido pelo terceiro ganhador e: %.2lf",
           (valor / 100) * 22);
}
void exercicio8() {

    int duracaoSegundos, horas, minutos, segundos;

    printf("\n========== Exercicio 8 ==========\n");

    printf("Escreva a duracao de um evento em segundos: ");
    scanf("%d", &duracaoSegundos);

    horas = duracaoSegundos / 3600;
    duracaoSegundos = duracaoSegundos % 3600;

    minutos = duracaoSegundos / 60;
    segundos = duracaoSegundos % 60;

    printf("O tempo desse evento sera de: %d:%d:%d",
           horas, minutos, segundos);
}
void exercicio9() {

    int tempoGasto, veloMedia, distancia;
    double litros;

    printf("\n========== Exercicio 9 ==========\n");

    printf("Escreva quantas horas foram necessarias para essa viagem: ");
    scanf("%d", &tempoGasto);

    printf("Escreva a media de velocidade durante a viagem: ");
    scanf("%d", &veloMedia);

    distancia = tempoGasto * veloMedia;

    litros = distancia / 12.0;

    printf("Seriam necessarios %.3lf litros para completar a viagem.",
           litros);
}
void exercicio10() {

    int x, y, z, maiorAB, maiorABC;

    printf("\n========== Exercicio 10 ==========\n");

    printf("Escreva o primeiro valor: ");
    scanf("%d", &x);

    printf("Escreva o segundo valor: ");
    scanf("%d", &y);

    printf("Escreva o terceiro valor: ");
    scanf("%d", &z);

    maiorAB = (x + y + abs(x - y)) / 2;

    maiorABC = (maiorAB + z + abs(maiorAB - z)) / 2;

    printf("Eh o maior: %d", maiorABC);
}
