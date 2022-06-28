#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {1};
    arr2 = arr1;

    const int dataArr2 = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < dataArr2; i++)
    {
        cout << " " << arr2[i];
    }
}