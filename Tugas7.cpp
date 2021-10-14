#include <iostream>
using namespace std;
int main() {
  int x,y,z;
  cout << "masukan nilai x : ";
  cin >> x;
  cout << "masukan nilai y : ";
  cin >> y;
  cout << "masukan nilai z : ";
  cin >> z;
  cout << endl;

  if (x%2==0) {
    cout << "x adalah genap\n\n";
  }else{
    cout << "x adalah ganjil\n\n";
  }
  if (y%2==0) {
    cout << "y adalah genap\n\n";
  }else{
    cout << "y adalah ganjil\n\n";
  }
  if (z%2==0) {
    cout << "z adalah genap\n\n";
  }else{
    cout << "z adalah ganjil\n\n";
  }
  return 0;
}
