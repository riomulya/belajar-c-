#include <iostream>
using namespace std;
void SeqSearch2(int Data[], int n, int x, int *idx);
int main()
{
    int Data[] = {23, 56, 10, 90, 35, 45, 9, 100, 200, 65};
    int idx, x, i, jmlDat = 10;
    cout << "Elemen Array : ";
    for (i = 0; i < jmlDat; i++)
    {
        cout << Data[i] << "";
        cout << endl;
        cout << "Masukan data yang akan dicari ?:";
        cin >> x;
    }
    SeqSearch2(Data, jmlDat, x, &idx);
    if (idx != -1)
    {
        cout << "Data yang dicari berada pada indek " << idx << endl;
    }
    else
    {
        cout << "Data yang dicari tidak ada dalam array " << endl;
    }
}
void SeqSearch2(int Data[], int n, int x, int *idx)
{
    int i = 0;
    while (i < n - 1 && Data[i] != x)
        i++;
    if (Data[i] == x)
        *idx = i;
    else
        *idx = -1;
}