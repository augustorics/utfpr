#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ehVogal(char c) {
    c = toupper(c);  // para tratar minúsculas e maiúsculas igualmente
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void extrairVogais(char *origem, char *destino) {
    int j = 0;
    for (int i = 0; origem[i] != '\0'; i++) {
        if (ehVogal(origem[i])) {
            destino[j++] = toupper(origem[i]);  // coloca tudo em maiúsculo
        }
    }
    destino[j] = '\0';  // finaliza a string
}

int main() {
    char nome[100], bairro[100];
    char senha[200];  // soma das vogais dos dois
    char vogaisNome[100], vogaisBairro[100];

    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);

    printf("Digite o bairro: ");
    scanf(" %[^\n]", bairro);

    extrairVogais(nome, vogaisNome);
    extrairVogais(bairro, vogaisBairro);

    // Concatena as vogais do nome e do bairro
    strcpy(senha, vogaisNome);
    strcat(senha, vogaisBairro);

    printf("Senha gerada: %s\n", senha);

    return 0;
}
