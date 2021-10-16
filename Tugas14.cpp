#include <iostream>
using namespace std;

int main() {
  struct jual
  {
    string tipe;
    int jumlahkamar;
    float luas;
    float tinggi;
    string pemilik;
  };
  jual rumah;
  cout << "Masukkan Tipe Rumah = ";
  cin >> rumah.tipe;
  //cout << "Tipe Rumah= " << rumah.tipe <<endl;
  cout << "Masukkan Jumlah Kamar = ";
  cin >> rumah.jumlahkamar;
 // cout << "Jumlah Kamarnya Adalah = " << rumah.jumlahkamar << endl;
  cout << "Masukkan Luas Rumah = ";
  cin >> rumah.luas;
  //cout << "Luas Rumahnya Adalah = " << rumah.luas << endl;
  cout << "Masukkan Tinggi Rumah = ";
  cin >> rumah.tinggi;
  //cout << "Tinggi Rumahnya Adalah = " << rumah.tinggi << endl;
  cout << "Masukkan Pemilik Rumah = ";
  cin >> rumah.pemilik;
  //cout << "Pemilik Rumahnya Adalah = " << rumah.pemilik << endl;
  cout << endl <<endl;
  cout << "Tipe Rumah= " << &rumah.tipe <<endl;
  cout << "Jumlah Kamarnya Adalah = " << &rumah.jumlahkamar << endl;
  cout << "Luas Rumahnya Adalah = " << &rumah.luas << endl;
  cout << "Tinggi Rumahnya Adalah = " << &rumah.tinggi << endl;
  cout << "Pemilik Rumahnya Adalah = " << &rumah.pemilik << endl;
  }