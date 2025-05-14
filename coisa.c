#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i, valor, encontrado;
    srand(time(NULL));
    printf("Preenchendo o vetor com valores aleatorios...\n");
    for(i = 0; i < TAMANHO - 1; i++) {
        vetor[i] = rand() % 50 + 1;
    }

    printf("\nValores do vetor:\n");
    for(i = 0; i < TAMANHO - 1; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    do {
        encontrado = 0;
        printf("\nDigite um valor: ");
        scanf("%d", &valor);
        for(i = 0; i < TAMANHO - 1; i++) {
            if(vetor[i] == valor) {
                encontrado = 1;
                printf("VALOR DUPLICADO! O valor %d ja existe no vetor.\n", valor);
                printf("Por favor, digite um novo valor.\n");
                break;
            }
        }
    } while(encontrado);
    vetor[TAMANHO - 1] = valor;
    printf("\nVetor atualizado com o novo valor na ultima posicao:\n");
    for(i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
