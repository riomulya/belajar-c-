#include <iostream>
#include <iomanip>
using namespace std;

long fibonacci(long n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
main()
{
    int x;
    cout << "masukan nilai fibonacci\n";
    cout << "masukan banyak deret : ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cout << setw(5) << fibonacci(i);
    }
}