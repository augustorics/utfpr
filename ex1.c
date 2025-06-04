#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    for (int i = 0; frase[i] != '\0'; i++) {
        char ch = tolower(frase[i]);
        switch(ch) {
            case 'a': cont_a++; break;
            case 'e': cont_e++; break;
            case 'i': cont_i++; break;
            case 'o': cont_o++; break;
            case 'u': cont_u++; break;
        }
    }


    printf("\na : ");
    for (int i = 0; i < cont_a; i++) printf("*");
    printf(" (%d)\n", cont_a);

    printf("e : ");
    for (int i = 0; i < cont_e; i++) printf("*");
    printf(" (%d)\n", cont_e);

    printf("i : ");
    for (int i = 0; i < cont_i; i++) printf("*");
    printf(" (%d)\n", cont_i);

    printf("o : ");
    for (int i = 0; i < cont_o; i++) printf("*");
    printf(" (%d)\n", cont_o);

    printf("u : ");
    for (int i = 0; i < cont_u; i++) printf("*");
    printf(" (%d)\n", cont_u);

    return 0;
}
