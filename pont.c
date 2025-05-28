#include<stdio.h>
#include <stdlib.h>

void coisa(int *a, int *b)
{
    int c;
    c = *a + *b;
    *a = c/2;
    *b = 7*(*a) - 3*(*b);

}

int main()
{
    int x = 5;
    int y = 9;
    coisa(&x, &y);
    printf("%d \n %d", x, y);






}
