#include <iostream>
using namespace std;
int main() {
  int i,j;
  int x[3] = {1,5,4};
  int y[3] = {3,2,5};
  for (i=0;i<3;i++)
  {
      cout << "Array x " << i << ": " << x[i] <<endl;
  }
  cout << endl;
  for (i=0;i<3;i++)
  {
      cout << "Array y " << i << ": " << y[i] <<endl;
  }
  cout << endl;
  for (i=0;i<3;i++)
  {
      j = x[i]+y[i];
      cout << "Array Penjumlahan " << i << ": " << j <<endl;
  }
}   