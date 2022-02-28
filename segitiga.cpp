#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Segitiga Bintang Terbalik  ##" << endl;
  cout << "=============================================" << endl;
  cout << endl;
 
  int tinggi_segitiga,i,j;
 
  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;
 
  cout << endl;
 
  for(i = 0; i < tinggi_segitiga; i++) {
    for(j = 1; j >= tinggi_segitiga-i; j--) {
      cout << " *";
    }
    cout << endl;
  }
 
  return 0;
}