
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i, j, posicao, maiorValor;
	int listaNum[100], listaMaior[100], utilizado[100] = {0};

    for(i = 0; i < 100; i++){
        printf("Escreva o %d numero: ", (i + 1));
        scanf("%d", &listaNum[i]);
    }

	maiorValor = listaNum[0];

    for(i = 0; i < 100; i++){

        for(j = 0; j < 100; j++){
            if(utilizado[j] == 0){
                maiorValor = listaNum[j];
                posicao = j;
                break;
            }
        }
        
        for(j = 0; j < 100; j++){
            if(utilizado[j] == 0){
                if(maiorValor < listaNum[j]){
                    maiorValor = listaNum[j];
                    posicao = j;
                }
            }
        }
        listaMaior[i] = maiorValor;
        utilizado[posicao] = 1;
    }

    printf("\nNumeros em ordem inversa na qual foram lidos, e ordenados do maior para o menor:\n");

    for(i = 99; i >= 0; i--){
        printf("%d ", listaMaior[i]);
    }

    return 0;
}
