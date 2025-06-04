#include <stdio.h>

void imprimirDireto(int vetor[], int tamanho, int *maior, int *menor) {
    *maior = *menor = vetor[0];  // inicializa com o primeiro elemento

    printf("Ordem direta: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);

        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
    printf("\n");
}

void imprimirInverso(int vetor[], int tamanho) {
    printf("Ordem inversa: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[5] = {10, 25, 3, 40, 18};
    int tamanho = 5;
    int maior, menor;

    imprimirDireto(vetor, tamanho, &maior, &menor);
    imprimirInverso(vetor, tamanho);

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
