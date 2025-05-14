#include <stdio.h>

void converteHora(int tempo, int*hora, int *min, int*seg)
{

    *hora = (tempo-tempo%3600)/3600;
    *min = ((tempo - *hora*3600)-(tempo - *hora*3600)%60) / 60;
    *seg = tempo - 3600*(*hora) - 60*(*min);
}

int main()
{


    int tempo = 0;
    int hora =0;
    int min =0;
    int seg = 0;
    printf("insira a quantidade de tempo em segundos: ");
    scanf("%d",&tempo);
    converteHora(tempo, &hora, &min, &seg);
    printf("O tempo e: %02d:%02d:%02d",hora,min,seg);

    return 0;
}
