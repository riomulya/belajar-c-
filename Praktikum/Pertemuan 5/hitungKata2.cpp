#include <stdio.h>
#include <conio.h>
char kata[30];
int jumlah(char x[])
{
    int i, *s;
    s = &i;
    *s = 0;
    while (x[*s] != '\0')
    {
        i++;
    }
    return *s;
}
main()
{
    printf("Masukkan sebuah kata atau kalimat: ");
    gets(kata);
    printf("Jumlah karakter: %d", jumlah(kata));
}