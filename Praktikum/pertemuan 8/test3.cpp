#include <stdio.h>
int main()
{
    int hitung[4] = {4, 1, 3, 2};
    int arrSize = *(&hitung + 1) - hitung;
    for (int i = 0; i < arrSize; i++)
    {
        printf("\n isi arraynya adalah %d", hitung[i]);
    }
}