//NÃO ESTÁ PRONTO!!!!!!!!!!


#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, posicao;
    int listaNum[10], listaMaior[10];

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &listaNum[i]);
    }

    int maior = listaNum[0];

    for (i = 0; i < 10; i++) {
        if (maior < listaNum[i]) {
            maior = listaNum[i];
            posicao = i;
            listaMaior[0] = maior;
        }
    }

    printf("\nMaior número encontrado: %d\n", maior);

    return 0;
}
