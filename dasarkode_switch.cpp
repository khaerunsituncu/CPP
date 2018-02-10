#include <iostream>
using namespace std;

string tahun;
int fakultas,prodi;
string idtahun,idfakultas, idprodi,nomor,npm;
char ulang;

struct uncu{
  int uncu;
};

int main(){
uncu a;
cout<<"Masukan tahun: ";
cin>>tahun;
idtahun=tahun.substr(2,3);

do{
cout<<"Fakulta :\n1.Hukum\n2.Pendidikan\n3.Ilmu Kesehatan\n4.Teknik\n";
cout<<"Masukkan Fakultas Anda: ";
cin>>a.uncu;
switch (a.uncu) {
  case 1:
  idfakultas="01";
  cout<<"Program Studi:\n1.Ilmu Hukum S1\n";
  break;
  case 2:
  idfakultas="02";
  cout<<"Program Studi:\n1.Bimbingan Konseling (S1)\n";
  break;
  case 3:
  idfakultas="03";
  cout<<"Program Studi:\n1.Ilmu Keperawatan\n";
  break;
  case 4:
  idfakultas="04";
  cout<<"Program Studi:\n1.Teknik Industri\n";
  break;
  default:
  cout<<"ID Fakultas yang anda masukkan salah\n";
}
cout<<"Mau Mengulangi [y/t]";
cin>>ulang;
}while(ulang=='y'||ulang=='Y');
}
