#include<stdio.h>

int main()
{
    float pa, pg, calc, calc1, ra, rg;
    printf("Insira o preço de 1 litro de alcool e de gasolina:  \n");
    scanf("%f %f",&pa, &pg);
    printf("Insira o rendimento do carro com 1 litro de alcool e gasolina:  \n");
    scanf("%f %f", &ra, &rg);
    calc = pa/ra;
    calc1 = pg/rg;
    if(calc >= calc1)
    {
        printf("G");
    }
    if(calc1 > calc)
    {
        printf("A");
    }

    return 0;
}

