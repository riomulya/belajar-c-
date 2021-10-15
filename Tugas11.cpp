#include <iostream>
using namespace std;
float segitiga(float a,float b){
    float luas;
    luas = a*b/2;
    return luas;
}
main() {
    float x;
    x = segitiga(10,5);
    cout << x;
  }