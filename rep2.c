#include <stdio.h>

int main()
{

    int v = 0;
    float soma = 0;
    int i = 0;
    while( v != -1000)
    {
        printf("insira um numero: ");
        scanf("%d",&v);
        if (v > 0)
        {
            soma = soma + v;
            i++;
        }

    }
    float calc = soma/i;
    printf("Quantidade de valores positivos: %d \n", i);
    printf(" Media dos valores positivos: %.1f",calc);

    return 0;
}

