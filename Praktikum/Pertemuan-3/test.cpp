#include <iostream>
#include <iomanip>
using namespace std;

main()
{
    char A[3][5] = {'A', 'B', 'C', 'D', 'E',
                    'F', 'G', 'H', 'I', 'J',
                    'K', 'L', 'M', 'N', 'O'};
    char *P;
    P = A[0];
    for (int i = 0; i <= 14; i++)
    {
        cout << *P++ << setw(4);
    }
}
