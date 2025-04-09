#include <stdio.h>

int main(){

    int n;
    printf("Insira um valor: \n");
    scanf("%d", &n);
    int i = 1;
    while(i <= 10){
        int mult = i*n;
        printf("%d \n", mult);
        i++;
    }


}

