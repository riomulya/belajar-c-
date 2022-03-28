#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>    
#include <stdlib.h>

using namespace std;

struct Tinggal {
     char Jalan [50];
     char Kota [15];
     char Kode_Pos [5];
};
struct Tanggal{
     int Tanggal;
     int Bulan;
     int Tahun;
};
struct Biodata {
     char NIP [10];
     char Nama [25];
     char Agama [10];
     char Jabatan [15];
     char Unit_Kerja [20];
     Tinggal Alamat;
     Tanggal Lahir;
     Tanggal Mulai_kerja;
};

int main(){

     Biodata pgw[5];
     int i;

     for (i=0; i<2; i++){
          cout<<"\t\t\tProgram Pendataan Karyawan"<<endl;
          cout<<"\n\t\t=============================================\n";
          cout<<"\t\tNama\t: ";cin>>pgw[i].Nama;
          cout<<"\t\tNIP\t: ";cin>>pgw[i].NIP;
          cout<<"\t\tAlamat\t\n";
          cout<<"\t\t\tJalan\t: ";cin>>pgw[i].Alamat.Jalan;
          cout<<"\t\t\tKota\t: ";cin>>pgw[i].Alamat.Kota;
          cout<<"\t\t\tKode Pos: ";cin>>pgw[i].Alamat.Kode_Pos;
          cout<<"\t\tJabatan: ";cin>>pgw[i].Jabatan;
          cout<<"\t\tAgama\t: ";cin>>pgw[i].Agama;
          cout<<"\t\tTanggal Lahir\n";
          cout<<"\t\t\tTanggal\t: ";cin>>pgw[i].Lahir.Tanggal;
          cout<<"\t\t\tBulan\t: ";cin>>pgw[i].Lahir.Bulan;
          cout<<"\t\t\tTahun\t: ";cin>>pgw[i].Lahir.Tahun;
          cout<<"\t\tTanggal Mulai Kerja\n";
          cout<<"\t\t\tTanggal\t: ";cin>>pgw[i].Mulai_kerja.Tanggal;
          cout<<"\t\t\tBulan\t: ";cin>>pgw[i].Mulai_kerja.Bulan;
          cout<<"\t\t\tTahun\t: ";cin>>pgw[i].Mulai_kerja.Tahun;
          cout<<"\t\tUnit Kerja: ";cin>>pgw[i].Unit_Kerja;

     }
     cout<<"Cetak"<<endl;
     for (i=0; i<2; i++){
          cout<<"========================== NIP"<<pgw[i].NIP<<"==========================";
          cout<<endl;
          cout<<"\nNama\t\t: "<<pgw[i].Nama;
          cout<<"\nAlamat\t: "<<pgw[i].Alamat.Jalan<<","<<pgw[i].Alamat.Kota<<","<<pgw[i].Alamat.Kode_Pos<<"";
          cout<<"\nJabatan\t: "<<pgw[i].Jabatan;
          cout<<"\nAgama\t\t: "<<pgw[i].Agama;
          cout<<"\nTanggal Lahir\t: "<<pgw[i].Lahir.Tanggal<<","<<pgw[i].Lahir.Bulan<<","<<pgw[i].Lahir.Tahun<<"";
          cout<<"\nTanggal Mulai\t: "<<pgw[i].Mulai_kerja.Tanggal<<","<<pgw[i].Mulai_kerja.Bulan<<","<<pgw[i].Mulai_kerja.Tahun<<";";
          cout<<"\nUnit Kerja: "<<pgw[i].Unit_Kerja;
          cout<<endl;
          cout<<"==============================================================\n";
     }
     getch();
}
