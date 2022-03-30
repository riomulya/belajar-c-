#include <stdio.h>

char kata[30];
int jumlah(char x[])
{
    int i, *s, j = 0, jml = 0;
    s = &i;
    *s = 0;
    // mengambil jumlah kata termasuk spasi
    while (x[*s] != '\0')
    {
        i++;
    }
    // menghilangkan spasi agar tidak dihitung
    for (j; j < *s; j++)
    {
        if (x[j] != ' ')
        {
            jml++;
        }
    }
    return jml;
}

main()
{

    printf("Masukkan sebuah kata atau kalimat: ");
    gets(kata);
    printf("Jumlah karakter: %d", jumlah(kata));
}