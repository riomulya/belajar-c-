#include <iostream>
using namespace std;
int main() {
  int x,y;
  cout << "masukan nilai x : ";
  cin >> x;
  cout << "masukan nilai y : ";
  cin >> y;
  if (x%2==0) {
    cout << "x adalah genap\n";
  }else{
    cout << "x adalah ganjil\n";
  }
  if (y%2==0) {
    cout << "y adalah genap\n";
  }else{
    cout << "y adalah ganjil\n";
  }
  return 0;
}
