#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 5

int main(){

    int pi[TAMANHO];
    int i =0;

    pi[0] = 1;

    while(i<5){
        pi[i] = i;
        printf("%d \n", pi[i]);
        i++;
}

return 0;
}
