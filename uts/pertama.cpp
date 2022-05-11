#include <iostream>
using namespace std;
#define nim 211011401091

int main()
{
    int a = 100, b = 200, *pa, *pb;
    pa = &a, pb = &b;
    if (pa < pb)
    {
        cout << "pa menunjuk ke memori lebih rendah dari pb\n";
    }
    else if (pa = pb)
    {
        cout << "pa menunjuk ke memori yang sama dengan pb\n";
    }
    else
    {
        cout << "pa menunjuk ke memori lebih tinggi dari pb\n";
    }
}
