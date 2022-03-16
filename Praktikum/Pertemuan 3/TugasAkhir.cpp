// Rio Mulya Syawal
// 211011401091
// 02TPLP015

#include <stdio.h>
main()
{
    int kode;
    printf("Masukkan Kode [1-7] : ");
    scanf("%d", &kode);
    if (kode == 1)
    {
        printf(" Kode : 1 , Hari : Senin \n");
    }
    else if (kode == 2)
    {
        printf(" Kode : 2 , Hari : Selasa \n");
    }
    else if (kode == 3)
    {
        printf(" Kode : 3 , Hari : Rabu \n");
    }
    else if (kode == 4)
    {
        printf(" Kode : 4 , Hari : Kamis \n");
    }
    else if (kode == 5)
    {
        printf(" Kode : 5 , Hari : Jum\'at \n");
    }
    else if (kode == 6)
    {
        printf(" Kode : 6 , Hari : Sabtu \n");
    }
    else if (kode == 7)
    {
        printf(" Kode : 7 , Hari : Minggu \n");
    }
    else
    {
        printf(" Pilihan Tidak Ada \n");
    }
}