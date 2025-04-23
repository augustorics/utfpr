#include <stdio.h>
#include <math.h>
int main()
{

    float al, la, ar, var, calc;
    int result;
    printf("Insira a altura e largura de parede respectivamente: ");
    scanf("%f %f",&al, &la);
    ar = al*la;
    var = ar/2;
    result = ceil(var);

    printf("quantidade de tinta nescessaria: %d", result);



}
