// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <string.h>
#include <stdio.h>
int main(void)
{
    char destination[25];
    char blank[10] = {" "}, c[10] = {"C++"}, Borland[10] = {"Borland"};
    strcpy(destination, Borland);
    strcat(destination, blank);
    strcat(destination, c);
    printf("%s\n", destination);
    return 0;
}