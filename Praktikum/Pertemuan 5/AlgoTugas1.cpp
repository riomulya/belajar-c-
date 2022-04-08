#include <iostream>

using namespace std;
int main()
{
    int a = 0, i, sum = 0, max = 0, min = 0,p;

    cout << "banyaknya element yang akan diinput :";
    cin >> a;

    int(*data);
    data = new int[a];
    for (i = 0; i < a; i++)
    {
        cout << "Input elemen ke ";
        cout << i + 1;
        cout << " : ";
        cin >> data[i];
    }
    cout << "\n data yang telah dimasukan adalah ";
    max = min = data[0];
    for (i = 0; i < a; i++)
    {
        cout << data[i] << ',';
        sum = sum + data[i];
        if (max < data[i])
        {
            max = data[i];
        }
        if (min > data[i])
        {
            min = data[i];
        }
    }
    float rata = (float)sum / a;
    cout << "\n Rata-Rata : " << rata;
    cout << "\n Jumlah : " << sum;
    cout << "\n Terkecil : " << min;
    cout << "\n Terbesar : " << max;
    cout << "\n================================\n";
}
