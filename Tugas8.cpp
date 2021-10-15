#include <iostream>
using namespace std;
int main() {
  int x;
  cout << "masukan nilai mata uang indonesia : ";
  cin >> x;
  switch (x)
  {
  case 1000 :
    cout << "satu ribu" <<endl;
    break;
  case 2000 :
    cout << "dua ribu" <<endl;
    break;
  case 5000 :
    cout << "lima ribu" <<endl;
    break;
  case 10000 :
    cout << "sepuluh ribu" <<endl;
    break;
  case 20000 :
    cout << "dua puluh ribu" <<endl;
    break;
  case 50000 :
    cout << "lima puluh ribu" <<endl;
    break;
  case 100000 :
    cout << "seratus ribu" <<endl;
    break;
  default: cout << "yang anda masukan tidak valid" ;
    break;
  }
}