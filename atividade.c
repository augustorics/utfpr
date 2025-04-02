#include <stdio.h>
int main(){

    int hora, min, seg, quantidade, qm, calc;

    printf("Digite Hora Minuto e Segundo: \t");
    scanf( "%d %d %d", &hora, &min, &seg);
  
    calc = 60*hora + min;
    quantidade = hora*3600 + min*60 + seg;
    qm = hora*60 + min + seg/60;

    if(calc>75){
        printf("Quantidade de Segundos: %d", quantidade);
                }

    else{
    printf("Quantidade de minutos: %d",qm);
    }










}
