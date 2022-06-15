#include <iostream>  //preposessor
#include <Windows.h> //preprosessor
using namespace std; // akses library std

int main()
{ // awal program, ditandai dengan fungsi main bertipe void dan
    // kurung kurawal buka

    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); // deklarasi objek
    SetConsoleTextAttribute(hstdout, 78);             // rubah warna teks pada console

    cout << "====================================================================\n";
    cout << "==                           Rubah Warna                          ==\n";
    cout << "==                     =======================                    ==\n";
    cout << "==                       *******************                      ==\n";
    cout << "==                       *******************                      ==\n";
    cout << "====================================================================\n";
    cout << "==                          <<<<<<<>>>>>>                         ==\n";
    cout << "====================================================================\n\n\n";

    SetConsoleTextAttribute(hstdout, 14); // rubah warna teks pada console
    system("pause");                      // menunda sementara berakhirnya program sampai ada penekanan
    // tombol keyboard
} // akhir dari fungsi main