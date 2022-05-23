// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char c = 'C';
    if (isupper(c))
        printf("%c is an uppercase character \n", c);
    else
        printf("%c is not an uppercase character\n", c);
    return 0;
}