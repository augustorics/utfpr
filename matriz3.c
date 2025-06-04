#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int matriz[TAM][TAM];
    int i, j;
    int maior = -9999, linha_maior = 0, col_maior = 0;

    srand(time(NULL)); 

    printf("Matriz:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matriz[i][j] = rand() % 100;
            printf("%3d ", matriz[i][j]);

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                col_maior = j;
            }
        }
        printf("\n");
    }

   
    int minimax = matriz[linha_maior][0];
    int col_minimax = 0;

    for (j = 1; j < TAM; j++) {
        if (matriz[linha_maior][j] < minimax) {
            minimax = matriz[linha_maior][j];
            col_minimax = j;
        }
    }

    printf("\nMaior elemento da matriz: %d (linha %d, coluna %d)\n", maior, linha_maior, col_maior);
    printf("Minimax (menor da linha %d): %d (linha %d, coluna %d)\n", linha_maior, minimax, linha_maior, col_minimax);

    return 0;
}
