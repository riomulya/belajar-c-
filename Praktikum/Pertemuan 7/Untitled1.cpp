#include <iostream>
using namespace std;

int main()
{
	cout <<"FAWWAZ FATIH\n211011402128\n\n";
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

