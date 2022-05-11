#include "stdio.h"
#include "conio.h"

int main()
{
    int x[5], *p, k;
    p = x;
    x[0] = 5;
    x[1] = x[0];
    x[2] = *p + 2;
    x[3] = *(p + 1) - 3;
    x[4] = *(x + 2);
    for (k = 0; k < 5; k++)
        printf("x[%i] = %i\n", k, x[k]);
    getch();
}