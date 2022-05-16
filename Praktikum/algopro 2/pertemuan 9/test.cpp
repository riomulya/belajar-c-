#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char huruf[100];
    cout << "Masukkan kata = ";
    gets(huruf);
    cout << "Jumlah Kata-nya : " << strlen(huruf);
}