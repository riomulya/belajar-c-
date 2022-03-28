#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
struct Tinggal
{
char Jalan[50];
char Kota[15];
char Kode_Pos[5];
};
struct Tanggal
{
int Tanggal;
int Bulan;
int Tahun;
};
struct Biodata
{
char Nip[9];
char Nama[25];
char Agama[10];
char Jabatan[10];
char Unit_kerja[15];
Tinggal Alamat;
Tanggal Lahir;
Tanggal Mulai_kerja;
};
main()
{

Biodata Pegawai[5];
int i;

for(i=0; i<2; i++)
{
cout<<“\t\t\t Program Pendataan Karyawan “<<endl;
cout<<“\n \t\t=============================================\n”;
cout<<“\t\tNIP \t: “;cin>>Pegawai[i].Nip;
cout<<“\t\tNama \t: “;cin>>Pegawai[i].Nama;
cout<<“\t\tAlamat \t\n”;
cout<<“\t\t\tJalan \t: “;cin>>Pegawai[i].Alamat.Jalan;
cout<<“\t\t\tKota \t: “;cin>>Pegawai[i].Alamat.Kota;
cout<<“\t\t\tKode Pos: “;cin>>Pegawai[i].Alamat.Kode_Pos;
cout<<“\t\tJabatan : “;cin>>Pegawai[i].Jabatan;
cout<<“\t\tAgama \t: “;cin>>Pegawai[i].Agama;
cout<<“\t\tTanggal Lahir \n”;
cout<<“\t\t\tTanggal : “;cin>>Pegawai[i].Lahir.Tanggal;
cout<<“\t\t\tBulan \t: “;cin>>Pegawai[i].Lahir.Bulan;
cout<<“\t\t\tTahun \t: “;cin>>Pegawai[i].Lahir.Tahun;
cout<<“\t\tTanggal Mulai Kerja \n”;
cout<<“\t\t\tTanggal : “;cin>>Pegawai[i].Mulai_kerja.Tanggal;
cout<<“\t\t\tBulan \t: “;cin>>Pegawai[i].Mulai_kerja.Bulan;
cout<<“\t\t\tTahun \t: “;cin>>Pegawai[i].Mulai_kerja.Tahun;
cout<<“\t\tUnit Kerja : “;cin>>Pegawai[i].Unit_kerja;

}
cout<<“Cetak”<<endl;
for(i=0; i<2; i++)
{
cout<<“========================== NIP “<<Pegawai[i].Nip<<” ========================== “;
cout<<endl;
cout<<“\n Nama \t\t: “<<Pegawai[i].Nama;
cout<<“\n Alamat \t: “<<Pegawai[i].Alamat.Jalan<<” “<<Pegawai[i].Alamat.Kota<<“, “<<Pegawai[i].Alamat.Kode_Pos;
cout<<“\n Jabatan \t: “<<Pegawai[i].Jabatan;
cout<<“\n Agama \t\t: “<<Pegawai[i].Agama;
cout<<“\n Tgl Lahir \t: “<<Pegawai[i].Lahir.Tanggal<<“-“<<Pegawai[i].Lahir.Bulan<<“-“<<Pegawai[i].Lahir.Tahun;
cout<<“\n Tgl Mulai Krj \t: “<<Pegawai[i].Mulai_kerja.Tanggal<<“-“<<Pegawai[i].Mulai_kerja.Bulan<<“-“<<Pegawai[i].Mulai_kerja.Tahun;
cout<<“\n Unit Kerja \t: “<<Pegawai[i].Unit_kerja;
cout<<endl;
cout<<“==============================================================\n”;
}
getch();
}
