#include <stdio.h>
#include <string.h>
#define MAX_TAM 101

int main() {
    char nome1[MAX_TAM], nome2[MAX_TAM], nome3[MAX_TAM];
    char entrada[MAX_TAM];
    printf("Digite o primeiro nome: ");
    scanf("%100s", nome1);
    printf("Digite o segundo nome: ");
    scanf("%100s", nome2);
    printf("Digite o terceiro nome: ");
    scanf("%100s", nome3);
    while (1) {
        printf("Digite um nome para verificar: ");
        scanf("%100s", entrada);
        if (strcmp(entrada, nome1) == 0 || 
            strcmp(entrada, nome2) == 0 || 
            strcmp(entrada, nome3) == 0) {
            printf("Nome reconhecido. Encerrando o programa.\n");
            break;
        }
    }

    return 0;
}
