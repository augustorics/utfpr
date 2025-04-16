#include <stdio.h>

int main()
{

    int v = 1;
    int n = 0;
    while(v >= 0)
    {
        printf("insira um numero: ");
        scanf("%d",&v);
        printf("%d \n", v);
        if(v > n)
        {
            n = v;
        }

    }
    printf(" Maior numero apresentado: %d", n);




    return 0;
}

