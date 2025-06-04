#include <stdio.h>
#include <string.h>

int main() {
    
    char frase1[500], frase2[500];
    char *palavras1[100], *palavras2[100];
    int i = 0, j = 0;

    printf("Digite a Frase 1: ");
    scanf(" %[^\n]", frase1);

    printf("Digite a Frase 2: ");
    scanf(" %[^\n]", frase2);

    
    char *token = strtok(frase1, " ");
    while (token != NULL) {
        palavras1[i++] = token;
        token = strtok(NULL, " ");
    }
    int total1 = i;

    
    token = strtok(frase2, " ");
    while (token != NULL) {
        palavras2[j++] = token;
        token = strtok(NULL, " ");
    }
    int total2 = j;

    printf("Frase 3: ");
    int k = 0, l = 0;
    while (k < total1 || l < total2) {
        if (k < total1) {
            printf("%s ", palavras1[k]);
            k++;
        }
        if (l < total2) {
            printf("%s ", palavras2[l]);
            l++;
        }
    }

    printf("\n");
    return 0;
}
