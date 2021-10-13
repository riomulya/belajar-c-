#include <iostream>
#include <math.h>
using namespace std;
int main() {
  float x;
  cout << "Inputkan Nilai Yang Ingin Dipangkatkan : ";
  cin >> x;
  x = pow(x,3);
  cout << "Hasil PerPangkatan : " << x;
  return 0;
}
