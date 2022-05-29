#include <iostream>
using namespace std;
struct S1
{
    char *s;
    int i;
    struct S1 *slp;
};
main()
{
    static struct S1 a[] = {
        {"abcdef", 1, a + 1},
        {"ghijkl", 2, a + 2},
        {"mnopqr", 3, a}};
    struct S1 *p = a;
    int i;
    cout << "a[0].s = " << a[0].s << "\n\np->s = " << p->s << "\n\na[2].slp->s = " << a[2].slp->s << endl
         << endl;
    for (i = 0; i < 3; i++)
    {
        cout << i << endl;
        cout << "--a[i].i = " << --a[i].i << endl;
        cout << "++a[i].i =  " << ++a[i].i << endl;
        cout << "p->s = " << p->s << endl;
        cout << "a[i].s = " << a[i].s << endl;
        cout << "a[i].slp->s =  " << a[i].slp->s << endl
             << endl;
    }
}