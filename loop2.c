#include <stdio.h>

int main(){

    int n;
    printf("Insira um valor: \n");
    scanf("%d", &n);
    int i = 1;
    while(i <= 100){
        if(i%n == 2){
            printf("%d \n",i);
            }
        i++;

    }


}

