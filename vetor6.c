#include <stdio.h>

void imprimirDireto(int vetor[], int tamanho) {
    printf("Ordem direta: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
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
    int vetor[5] = {10, 20, 30, 40, 50};
    int tamanho = 5;

    imprimirDireto(vetor, tamanho);
    imprimirInverso(vetor, tamanho);

    return 0;
}
