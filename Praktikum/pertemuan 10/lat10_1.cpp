#include <iostream>
using namespace std;
int main()
{
    int v = 7, *p;
    p = &v;
    cout << "nilai v =" << v << " dan *p =" << *p << "\n alamatnya = " << p << '\n';
}