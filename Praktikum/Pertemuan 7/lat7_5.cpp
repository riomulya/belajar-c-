// Rio Mulya Syawal
// 02TPLP015
// 211011401091

#include <iostream>
int mult(int x, int y, int z);
using namespace std;

int main()
{
    int x, y, z;
    cout << "masukan bilangan pertama : ";
    cin >> x;
    cout << "masukan bilangan kedua : ";
    cin >> y;
    cout << "masukan bilangan ketiga : ";
    cin >> z;
    cout << "hasil perkalian bilangan itu adalah " << mult(x, y, z) << "\n";
}
int mult(int x, int y, int z)
{
    return x * y * z;
}