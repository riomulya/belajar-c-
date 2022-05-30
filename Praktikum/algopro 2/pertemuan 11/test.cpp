/*Mengurutkan data dengan metode Bubble Sort*/
#include <iostream>
using namespace std;
void BubbleSort(int data[], int n); // prototipe fungsi
int main(void)
{
    int i;
    int n = 12; // Jml Data = 10 maka n = 9
    int data[] = {20, 10, 32, 100, 60, 12, 70, 25, 45, 65, 9, 11, 99};
    cout << "Sebelum diurutkan :" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
    cout << "_______________________________"
         << endl;
    BubbleSort(data, n); /*Pemanggilan fungsi
     BubbleSort*/
    cout << "Setelah diurutkan" << endl;
    for (i = 0; i <= n; i++)
        cout << data[i] << " ";
    cout << endl;
}

void BubbleSort(int array1[], int n)
{
    int i, k, tmp;
    for (i = 1; i <= n; i++)
    {
        for (k = n; k >= i; k--)
        {
            if (array1[k] < array1[k - 1])
            {
                tmp = array1[k];
                array1[k] = array1[k - 1];
                array1[k - 1] = tmp;
            }
        }
    }
}