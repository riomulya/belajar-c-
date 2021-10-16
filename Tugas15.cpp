#include <iostream>
using namespace std;

void ubah (int *s){
    cout << s << endl;
    *s = 10;
}

int main(){
    int x,y;
    x = 6;
    y = x;
    ubah(&x);
    cout << "isi variabel x adalah = " << x << endl;
    cout << "isi variabel y adalah = " << y << endl;
    x = x * y;
    cout << "Hasil Perkalian x dan y = " << x << endl;
}