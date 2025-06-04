#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[200];
    char *palavra;

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome);

    printf("Abreviatura: ");

    palavra = strtok(nome, " ");
    while (palavra != NULL) {
        if (strlen(palavra) <= 2) {
            printf("%s ", palavra);  
        } else {
            printf("%c. ", toupper(palavra[0]));  
        }
        palavra = strtok(NULL, " ");
    }

    printf("\n");
    return 0;
}
