#include <iostream>
using namespace std;
void SeqSearch(int Data[], int n, int x, int *idx);
int main()
{
    int Data[] = {23, 26, 30, 50, 55, 65, 69, 78, 80, 90};
    int idx, x, i, jmlDat = 10;
    cout << "Elemen Array : ";
    for (i = 0; i < jmlDat; i++)
        cout << Data[i] << " ";
    cout << endl;
    cout << "Masukan data yang akan dicari ?: ";
    cin >> x;
    SeqSearch(Data, jmlDat, x, &idx);
    if (idx != -1)
    {
        cout << "Data yang dicari berada pada indek " << idx << endl;
    }
    else
    {
        cout << "Data yang dicari tidak ada dalam array " << endl;
    }
}
void SeqSearch(int Data[], int n, int x, int *idx)
{
    int i = 0;
    while (i < n - 1 && Data[i] < x)
        i++;
    if (Data[i] == x)
        *idx = i;
    else
        *idx = -1;
}