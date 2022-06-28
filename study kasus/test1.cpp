#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // int data[100];
    int data = 10;
    ofstream berkas("test1.txt");
    berkas.open("test1.txt");
    // for (int i = 0; i < 5;)
    // {
    //     cin >> data[i];
    //     berkas << data;
    // }
    berkas << data;
    berkas.close();
    ifstream berkas("test1.txt");
    berkas.open("test1.txt");
    berkas >> data;
    berkas.close();
}